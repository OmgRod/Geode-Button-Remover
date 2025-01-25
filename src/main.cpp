#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}

		auto menu = this->getChildByID("bottom-menu");
		menu->removeChildByID("geode.loader/geode-button");

		menu->updateLayout();

		return true;
	}
};
