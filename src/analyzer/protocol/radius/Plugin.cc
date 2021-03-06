// See the file  in the main distribution directory for copyright.

#include "RADIUS.h"
#include "plugin/Plugin.h"
#include "analyzer/Component.h"

namespace plugin {
namespace Zeek_RADIUS {

class Plugin : public plugin::Plugin {
public:
	plugin::Configuration Configure() override
		{
		AddComponent(new ::analyzer::Component("RADIUS", ::analyzer::RADIUS::RADIUS_Analyzer::Instantiate));

		plugin::Configuration config;
		config.name = "Zeek::RADIUS";
		config.description = "RADIUS analyzer";
		return config;
		}
} plugin;

}
}
