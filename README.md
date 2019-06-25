Build instructions
------------------

Either in the root folder or in `identity-theft` folder, run the following commands:

**Linux**:
```bash
mkdir build 
cd build
cmake -G "Unix Makefiles" ..
cmake --build .
```

Run with either:
```bash
./magic
```
Or:
```
./identityTheft
```

**Windows**
```bash
md build 
cd build
cmake -G "Visual Studio 15 2017" ..
cmake --build .
```
Run with either:
```bash
Debug\magic
```
Or:
```
Debug\identityTheft
```
