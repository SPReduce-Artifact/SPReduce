import java.util.HashMap;
import java.util.Map;
import org.eclipse.cdt.core.dom.ast.*;
import org.eclipse.cdt.core.index.IIndex;
import org.eclipse.cdt.core.model.ILanguage;
import org.eclipse.cdt.core.parser.*;
import org.eclipse.cdt.core.dom.rewrite.ASTRewrite;
import org.eclipse.cdt.internal.core.dom.rewrite.ASTModification;
import org.eclipse.cdt.internal.core.dom.rewrite.ASTModificationStore;
import org.eclipse.cdt.internal.core.dom.rewrite.astwriter.ASTWriter;
import org.eclipse.cdt.internal.core.dom.rewrite.commenthandler.NodeCommentMap;
import org.eclipse.cdt.core.dom.ast.gnu.c.GCCLanguage;
import org.eclipse.cdt.internal.core.dom.rewrite.ASTRewriteAnalyzer;
import org.eclipse.core.runtime.CoreException;
import org.eclipse.jface.text.Document;
import org.eclipse.text.edits.TextEdit;

public class FunctionalTest {
    public static void main(String[] args) throws Exception {
        String code =
                "int main() {\n" +
                        "    int a = 1;\n" +
                        "    int b = 2;\n" +
                        "    return 0;\n" +
                        "}";

        FileContent fileContent = FileContent.create("test.c", code.toCharArray());

        Map<String, String> definedSymbols = new HashMap<>();
        IScannerInfo scannerInfo = new ScannerInfo(definedSymbols);
        IncludeFileContentProvider emptyIncludes = IncludeFileContentProvider.getEmptyFilesProvider();
        IIndex index = null;
        int opts = ILanguage.OPTION_IS_SOURCE_UNIT;
        IParserLogService log = new DefaultLogService();

        IASTTranslationUnit tu = GCCLanguage.getDefault().getASTTranslationUnit(
                fileContent, scannerInfo, emptyIncludes, index, opts, log);

        IASTFunctionDefinition func = (IASTFunctionDefinition) tu.getDeclarations()[0];
        IASTCompoundStatement body = (IASTCompoundStatement) func.getBody();

        IASTStatement stmtToRemove = body.getStatements()[0];
        ASTRewrite rewriter = ASTRewrite.create(tu);
        rewriter.remove(stmtToRemove, null);
        Document document = new Document(code);

        String modifiedCode = new ASTWriter().write(tu);

        System.out.println("------\n" + modifiedCode);
    }

}
