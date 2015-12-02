gem "minitest"
require "minitest/autorun"
require "r"

class TestR < Minitest::Test
  def test_sanity
    flunk "write tests or I will kneecap you"
  end
end
