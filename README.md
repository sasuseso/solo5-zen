ZenLang on Solo5 unikernel base(sample)
===============================

Requirements
-----------
- zen on PATH
- wget
If you don't have own solo5 build, there are build_ script.  
```sh build__solo5.sh```

Build and Run
-------------

To build: ```zen build```  

To run: ```zen build run```

### With Docker

1. ```docker run --privileged -it --rm solo5-zen-image```
2. ```zen build run -Dsolo5_dir=../solo5```


References
----------
### about Zen
- https://zen-lang.org/ja-JP/
### about Solo5
- https://dl.acm.org/doi/10.1145/3267809.3267845
