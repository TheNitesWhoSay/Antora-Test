Test documentation generation repo: https://theniteswhosay.github.io/Antora-Test/

/doc - contains antora documentation source files (ascii doc markup language, resources & documentation configuration files)

/docs - this folder is gitignored, but holds locally generated documentation

/tools - contains a generate-docs.bat file which generates documentation in the /docs folder, assuming you have [antora](https://docs.antora.org/antora/latest/install-and-run-quickstart/) installed globally

./github/workflows/doc-generator.yml - github actions workflow/script which...
- Is automatically triggered by pushes to main which change something in the /doc folder
- Generates the documentation web files the ~same as generate.docs.bat does
- Publishes them to [git pages](https://theniteswhosay.github.io/Antora-Test/)

Pushes done to feature/dev branches or which don't affect the /doc folder do not trigger the documentation generation.
