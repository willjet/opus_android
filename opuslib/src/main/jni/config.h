#ifndef CONFIG_H
#define CONFIG_H


/* Comment out the next line for floating-point code */
//define FIXED_POINT           1
#define FLOATING_POINT        	1
#define OPUS_BUILD            	1
#define OUTSIDE_SPEEX         	1
#define OPUSTOOLS             	1
#define USE_ALLOCA            	1
#define _BUILD_SPEEX          	1
#define SPX_RESAMPLE_EXPORT
#define RANDOM_PREFIX         	opus__

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "opus@xiph.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "opus"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "opus 1.2.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "opus"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.2.1"


/* Comment out the next line for Android */
#define ANDROID_V

#endif /* CONFIG_H */