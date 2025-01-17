// $Id: HashMap.hh.in,v 1.5 2009/08/06 14:58:24 mmann Exp $
#ifndef BIU_HASHMAP_HH_
#define BIU_HASHMAP_HH_

// is set to 1 if header <unordered_map> is available, 0 otherwise
#define HAVE_UNORDERED_MAP 1

// is set to 1 if header <tr1/unordered_map> is available, 0 otherwise
#define HAVE_TR1_UNORDERED_MAP 0

// is set to 1 if header <ext/hash_map> 
// with "__gnu_cxx" namespace is available, 0 otherwise
#define HAVE_GNU_HASH_MAP 1


#if HAVE_GNU_HASH_MAP == 1

#include <string>

namespace biu {

	/*! Daniel J. Bernstein's string hash function 
	 *  taken from http://www.cs.yorku.ca/~oz/hash.html.
	 */
	class hash_string {
	public:

		size_t operator()(const std::string& str) const
		{
			size_t hash = 5381;

			for (size_t i = 0; i < str.size(); i++) {
				hash = ((hash << 5) + hash) + (size_t)str[i]; // hash * 33 + str[i]
			}

			return hash;
		}
		     
	};
}

#endif // (HAVE_GNU_HASH_MAP == 1)


#endif /*BIU_HASHMAP_HH_IN_*/
