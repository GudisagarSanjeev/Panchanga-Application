import QtQuick 2.0
import QtQuick.Controls 1.4

Rectangle {
    id:informationpage
    height: parent.height
    width: parent.width
    color:"#A7FF83"
    signal dateClicked();
    Rectangle{
        height: parent.height * 0.5
        width: parent.width * 0.002
        color:"white"
        anchors.centerIn: parent
    }

    ListView{
        id:lis
        height: parent.height
        width: parent.width
        model:modell
        delegate:InformationPageDelegate{
            id:c}

    }
    AddCustomEvent{
        id:si
        //read:ListView.currentItem.
    }
    CalenderPage{
        id:cal
        visible: false
    }
}
