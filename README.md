# NDKSample

2.jni下没有mk的情况

新式的:

2.第二种情况是新的方法，是通过gradle构建的ndk。

这种情况用不到自己去右键--> NDK --> ndk-build去生成so。

第一步右击java文件-->NDK-->javah（现象：生成jni目录，目录下有对应的.h文件）

第二步开发jni层的代码之后，在app下的build.gradle文件中

defaultConfig节点下添加
ndk {
    moduleName "HelloJni"
}
另外，defaultConfig节点还可以添加其他的信息（设置固定平台下的so），可以看下我收藏的视频。
这种情况下，运行的时候，生成的so都会在build->intermediates->ndk下。由Android Studio管理。
