import QtQuick 2.0
import QtQuick.Controls 1.4

Rectangle {
    anchors.fill: parent
    color:"#A7FF83"
    Calendar{
        id:c
        height: parent.height/1.2
        width: parent.width/1.5
        anchors.centerIn: parent
        minimumDate: new Date(2018, 08, 27)
        maximumDate: new Date(2019, 04, 04)
        onClicked: {
            var formatdate

            var month_names =["Jan","Feb","Mar",
                              "Apr","May","Jun",
                              "Jul","Aug","Sep",
                              "Oct","Nov","Dec"];


            formatdate = (date.getDate()<10 ? "0" +date.getDate():date.getDate())+" "+(month_names[date.getMonth()])+" "+date.getFullYear()
            modell.dateSelected(formatdate)
            cal.visible=false
            informationpage.visible=true

        }
    }

}
