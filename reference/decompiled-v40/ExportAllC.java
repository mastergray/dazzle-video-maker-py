// Ghidra headless script to decompile all functions to C pseudo-code
// @category Export
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.FileWriter;
import java.io.PrintWriter;

public class ExportAllC extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outputPath = args.length > 0 ? args[0] : "/tmp/decompiled.c";

        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        PrintWriter out = new PrintWriter(new FileWriter(outputPath));
        out.println("// Decompiled from: " + currentProgram.getName());
        out.println("// Processor: " + currentProgram.getLanguage().getProcessor());
        out.println("// Endian: " + currentProgram.getLanguage().isBigEndian());
        out.println("// Address size: " + currentProgram.getAddressFactory().getDefaultAddressSpace().getSize());
        out.println();

        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        int count = 0;
        while (functions.hasNext()) {
            Function func = functions.next();
            DecompileResults results = decomp.decompileFunction(func, 30, monitor);
            if (results.decompileCompleted()) {
                String code = results.getDecompiledFunction().getC();
                out.println("// Function: " + func.getName() + " @ " + func.getEntryPoint());
                out.println(code);
                out.println();
            } else {
                out.println("// FAILED to decompile: " + func.getName() + " @ " + func.getEntryPoint());
                out.println();
            }
            count++;
            if (count % 50 == 0) {
                println("Decompiled " + count + " functions...");
            }
        }

        out.close();
        decomp.dispose();
        println("Exported " + count + " functions to " + outputPath);
    }
}
