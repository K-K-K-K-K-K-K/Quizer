# Quizer

## 依存物
- GCC
- Ninja (任意だが推奨)


## コンパイル
### ビルドツールを用いる場合
```
$ ninja
```

### コマンド手打ちの場合
```
$ gcc Main.c Quiz.c QAUnit.h AnsProc.c QAFileReader.c -o Quizer
```


## 実行
```
$ ./Quizer
```

