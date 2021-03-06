// /corp/projects/surfup2/work/show/tst010/310/fx/hraab/maya/cache/nCache/fx_hraab_wave_v001
#include <iostream>
#include <string>
#include <boost/format.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <glog/logging.h>

#include "nCacheLoader.h"

int
main (int argc, char **argv)
{
	google::InitGoogleLogging(argv[0]);
	if (argc == 2)
	{
		std::string xml_filename(argv[1]);
		nCache::nCacheLoader cache_loader;
		cache_loader.process(xml_filename);
	}
	else
	{
		std::cerr << boost::format("Usage : %1% <ncache xml>") % argv[0] << std::endl;
		return 1;
	}
	return 0;
}

// == Emacs ================
// -------------------------
// Local variables:
// tab-width: 4
// indent-tabs-mode: t
// c-basic-offset: 4
// end:
//
// == vi ===================
// -------------------------
// Format block
// ex:ts=4:sw=4:expandtab
// -------------------------
