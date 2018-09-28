import QtQuick 2.0
import QtQuick.Controls 2.0

Rectangle{
    id: root
    anchors.fill: parent

    Column{
        anchors.fill: parent
        Row{
            height: parent.height * 0.09
            width: parent.width
            MainHeader{
//                menu1.onSpecialDayClicked: {
//                    homepage.visible =  true
//                    menu1.close()
//                }
//                menu1.onGaligeClicked: {
//                    galige.visible=true
//                    menu1.close()
//                }
//                menu1.onTarpanaClicked: {
//                    t.visible=true
//                    menu1.close()
//                }
            }
        }
//        Row{
//            height: parent.height * 0.06
//            width: parent.width
//            SunInformation{
//            }
//        }
//        Row{
//            height: parent.height * 0.002
//            width: parent.width
//            Rectangle{
//                height: parent.height
//                width: parent.width
//                color:"maroon"
//            }
//        }

        Row{
            height: parent.height * 0.92
            width: parent.width
            InformationPage{}
        }
//        Row{
//            height: parent.height *0.18
//            width: parent.width
//            ButtonsPage{}
//        }
    }

    HomePage{
        id:homepage
        visible: false
    }
    AshubhaShubhaPage{
        id:galige
        visible: false
    }
    TarpanaPage{
        id:t
        visible: false
    }

}




