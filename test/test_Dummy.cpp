#include <boost/test/unit_test.hpp>
#include <console_bridge/Dummy.hpp>

using namespace console_bridge;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    console_bridge::DummyClass dummy;
    dummy.welcome();
}
