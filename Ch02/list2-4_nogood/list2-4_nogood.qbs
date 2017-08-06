import qbs

CppApplication {
    consoleApplication: true
    files: "main.c"
    //minimumQbsVersion: "1.6"
    //PropertyOptions {name: "c"}
    //c.warningLevel: 'all'
    //c.cLanguageVersion: "c11"

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
