# GGN

ggn is an experimental meta build tool for the google gn build system. 
ggn stands for "generate gn" which fully expands to "generate generate ninja" 

WORK IN PROGRESS

# Install

install gn in $HOME/.local

```bash
git clone https://github.com/cruisercoder/ggn.git ~/src/ggn && ~/src/ggn/install
```

add the local bin directory to your path (~/.bashrc, etc)

```bash
export PATH=$HOME/.local/bin:$PATH
```

check that gn is present

```bash
which gn
gn --version
gn --help
```

