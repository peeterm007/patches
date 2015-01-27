--- gio/gcredentialsprivate.h.orig	2015-01-27 12:03:41.450391000 +0900
+++ gio/gcredentialsprivate.h	2015-01-27 12:04:17.520945000 +0900
@@ -31,7 +31,7 @@
 #define G_CREDENTIALS_SOCKET_GET_CREDENTIALS_SUPPORTED 1
 #define G_CREDENTIALS_SPOOFING_SUPPORTED 1
 
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__GNU__) || defined(__DragonFly__)
 #define G_CREDENTIALS_SUPPORTED 1
 #define G_CREDENTIALS_USE_FREEBSD_CMSGCRED 1
 #define G_CREDENTIALS_NATIVE_TYPE G_CREDENTIALS_TYPE_FREEBSD_CMSGCRED
