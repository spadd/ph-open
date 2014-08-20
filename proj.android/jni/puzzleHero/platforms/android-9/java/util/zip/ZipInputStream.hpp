/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.zip.ZipInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_ZIPINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_ZIPINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class InflaterInputStream; } } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class ZipEntry; } } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class FilterInputStream; } } }


#include <java/io/Closeable.hpp>
#include <java/io/FilterInputStream.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/util/zip/InflaterInputStream.hpp>
#include <java/util/zip/ZipEntry.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class ZipInputStream;
	class ZipInputStream
		: public object<ZipInputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)

		explicit ZipInputStream(jobject jobj)
		: object<ZipInputStream>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::zip::InflaterInputStream>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::InputStream>() const;
		operator local_ref<java::io::FilterInputStream>() const;


		ZipInputStream(local_ref< java::io::InputStream > const&);
		void close();
		void closeEntry();
		local_ref< java::util::zip::ZipEntry > getNextEntry();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		jlong skip(jlong);
		jint available();
	}; //class ZipInputStream

} //namespace zip
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_ZIPINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_ZIPINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_ZIPINPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::util::zip::ZipInputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::zip::ZipInputStream::operator local_ref<java::util::zip::InflaterInputStream>() const
{
	return local_ref<java::util::zip::InflaterInputStream>(get_jobject());
}

java::util::zip::ZipInputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::util::zip::ZipInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}

java::util::zip::ZipInputStream::operator local_ref<java::io::FilterInputStream>() const
{
	return local_ref<java::io::FilterInputStream>(get_jobject());
}


java::util::zip::ZipInputStream::ZipInputStream(local_ref< java::io::InputStream > const &a0)
: object<java::util::zip::ZipInputStream>(
	call_new_object<
		java::util::zip::ZipInputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipInputStream::J2CPP_METHOD_NAME(0),
		java::util::zip::ZipInputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


void java::util::zip::ZipInputStream::close()
{
	return call_method<
		java::util::zip::ZipInputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipInputStream::J2CPP_METHOD_NAME(1),
		java::util::zip::ZipInputStream::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void java::util::zip::ZipInputStream::closeEntry()
{
	return call_method<
		java::util::zip::ZipInputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipInputStream::J2CPP_METHOD_NAME(2),
		java::util::zip::ZipInputStream::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

local_ref< java::util::zip::ZipEntry > java::util::zip::ZipInputStream::getNextEntry()
{
	return call_method<
		java::util::zip::ZipInputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipInputStream::J2CPP_METHOD_NAME(3),
		java::util::zip::ZipInputStream::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::zip::ZipEntry >
	>(get_jobject());
}

jint java::util::zip::ZipInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::util::zip::ZipInputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipInputStream::J2CPP_METHOD_NAME(4),
		java::util::zip::ZipInputStream::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jlong java::util::zip::ZipInputStream::skip(jlong a0)
{
	return call_method<
		java::util::zip::ZipInputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipInputStream::J2CPP_METHOD_NAME(5),
		java::util::zip::ZipInputStream::J2CPP_METHOD_SIGNATURE(5), 
		jlong
	>(get_jobject(), a0);
}

jint java::util::zip::ZipInputStream::available()
{
	return call_method<
		java::util::zip::ZipInputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipInputStream::J2CPP_METHOD_NAME(6),
		java::util::zip::ZipInputStream::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(java::util::zip::ZipInputStream,"java/util/zip/ZipInputStream")
J2CPP_DEFINE_METHOD(java::util::zip::ZipInputStream,0,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipInputStream,1,"close","()V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipInputStream,2,"closeEntry","()V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipInputStream,3,"getNextEntry","()Ljava/util/zip/ZipEntry;")
J2CPP_DEFINE_METHOD(java::util::zip::ZipInputStream,4,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::util::zip::ZipInputStream,5,"skip","(J)J")
J2CPP_DEFINE_METHOD(java::util::zip::ZipInputStream,6,"available","()I")
J2CPP_DEFINE_METHOD(java::util::zip::ZipInputStream,7,"createZipEntry","(Ljava/lang/String;)Ljava/util/zip/ZipEntry;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_ZIPINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION