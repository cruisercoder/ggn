# GGN

ggn is an experimental meta build tool for the google gn build system. 
ggn stands for "generate gn" which fully expands to "generate generate ninja" 

WORK IN PROGRESS

# Quickstart Install

Execute this one liner command which will install tools in $HOME/.local).

```bash
git clone https://github.com/cruisercoder/ggn.git ~/src/ggn && ~/src/ggn/install
```

Then add the local bin directory to your path (~/.bashrc, ~/.zshrc, etc).

```bash
export PATH=$HOME/.local/bin:$PATH
```

Check that gn is present.

```bash
which gn
gn --version
gn --help
```

