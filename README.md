# GGN

ggn is an experimental meta build tool for the google gn build system. 
ggn stands for "generate gn" which fully expands to "generate generate ninja" 

WORK IN PROGRESS

# Quickstart Install

Set up a GGN_HOME variable for setup purposes (changed as needed).

```bash
export GGN_HOME=$HOME/src/ggn
```

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

# Try the example project

```bash
cd $GGN_HOME
```

See the structure.

```bash
tree example1
```

Generate out directory.

```bash
gn gen out/release
```

Build and run.

```bash
ninja -C out/release && out/release/bin/tool
```

# Setting up GGN for your project

Set up a $PROJECT variable to help setup your project (change as needed).

```bash
export PROJECT=$HOME/src/project
```

Check to see that project exists.

```bash
mkdir -p $PROJECT
```

Tell git to ignore the build directory inside the project.

```bash
echo '/build' >> $PROJECT/.gitignore
```

Copy the build stuff.

```bash
rm -rf $PROJECT/build && cp -r ~/src/ggn/build $PROJECT
cp $GGN_HOME/.gn $PROJECT
```

Copy starter top level config.

```bash
echo -e 'group("top") {deps = ["//proj1"]}' | gn format --stdin > $PROJECT/BUILD.gn
```

# Setting up an out directory for a build


```bash
cd $PROJECT
```

Set up an out directory for regular debugging. This is done once for each out diretory (out/debug, out/release, etc). The
settings can be changed in the out/debug/args.gn file.

```bash
gn gen out/debug --args='enable_debug=true enable_symbols=true'
```

Build everything. 

```bash
ninja -C out/debug
```

Clean build.

```bash
ninja -C out/debug -t clean
```

Build everything and see compile commands.

```bash
ninja -C out/debug
```


