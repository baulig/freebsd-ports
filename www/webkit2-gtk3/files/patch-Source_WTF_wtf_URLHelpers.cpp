--- Source/WTF/wtf/URLHelpers.cpp	2022-11-02 10:06:31.183708700 +0100
+++ Source/WTF/wtf/URLHelpers.cpp	2023-11-18 22:25:05.633870000 +0100
@@ -48,7 +48,7 @@
 //    WebKit was compiled.
 // This is only really important for platforms that load an external IDN allowed script list.
 // Not important for the compiled-in one.
-constexpr auto scriptCodeLimit = static_cast<UScriptCode>(256);
+constexpr auto scriptCodeLimit = static_cast<UScriptCode>(255);
 
 static uint32_t allowedIDNScriptBits[(scriptCodeLimit + 31) / 32];
 
Only in webkitgtk-2.38.3/Source/WebKit/Scripts/webkit: __pycache__
