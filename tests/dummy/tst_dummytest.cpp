#include <QString>
#include <QtTest>

class DummyTest : public QObject
{
    Q_OBJECT

public:
    DummyTest();

private Q_SLOTS:
    void testCase1();
};

DummyTest::DummyTest()
{
}

void DummyTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(DummyTest)

#include "tst_dummytest.moc"
