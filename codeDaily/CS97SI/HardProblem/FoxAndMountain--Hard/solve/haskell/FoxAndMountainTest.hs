import Test.HUnit
import FoxAndMountain

testCount :: Test
testCount = TestCase 
    (assertEqual "" 0 0)

tests = TestList [ TestLabel "testCount" testCount ]

main = runTestTT tests
