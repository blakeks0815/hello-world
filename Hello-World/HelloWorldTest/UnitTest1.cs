using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using Hello_World;

namespace HelloWorldTest {
    [TestClass]
    public class UnitTest1 {
        [TestMethod]
        public void TestMethod1() {

            int value1 = 10;
            int value2 = 20;

            int testresult = value1 * value2;

            Assert.AreEqual(testresult, Functions.getMultiplication(12, value2));

        }
    }
}
