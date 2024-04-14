/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Common_Reportrow.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Reportrow::Common_Reportrow(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Reportrow::Common_Reportrow() {
    this->initializeModel();
}

Common_Reportrow::~Common_Reportrow() {}

void Common_Reportrow::initializeModel() {

    m_a_obj_reportcell_isSet = false;
    m_a_obj_reportcell_isValid = false;

    m_i_reportrow_height_isSet = false;
    m_i_reportrow_height_isValid = false;
}

void Common_Reportrow::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Reportrow::fromJsonObject(QJsonObject json) {

    m_a_obj_reportcell_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_reportcell, json[QString("a_objReportcell")]);
    m_a_obj_reportcell_isSet = !json[QString("a_objReportcell")].isNull() && m_a_obj_reportcell_isValid;

    m_i_reportrow_height_isValid = ::Ezmaxapi::fromJsonValue(m_i_reportrow_height, json[QString("iReportrowHeight")]);
    m_i_reportrow_height_isSet = !json[QString("iReportrowHeight")].isNull() && m_i_reportrow_height_isValid;
}

QString Common_Reportrow::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Reportrow::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_reportcell.size() > 0) {
        obj.insert(QString("a_objReportcell"), ::Ezmaxapi::toJsonValue(m_a_obj_reportcell));
    }
    if (m_i_reportrow_height_isSet) {
        obj.insert(QString("iReportrowHeight"), ::Ezmaxapi::toJsonValue(m_i_reportrow_height));
    }
    return obj;
}

QList<Common_Reportcell> Common_Reportrow::getAObjReportcell() const {
    return m_a_obj_reportcell;
}
void Common_Reportrow::setAObjReportcell(const QList<Common_Reportcell> &a_obj_reportcell) {
    m_a_obj_reportcell = a_obj_reportcell;
    m_a_obj_reportcell_isSet = true;
}

bool Common_Reportrow::is_a_obj_reportcell_Set() const{
    return m_a_obj_reportcell_isSet;
}

bool Common_Reportrow::is_a_obj_reportcell_Valid() const{
    return m_a_obj_reportcell_isValid;
}

qint32 Common_Reportrow::getIReportrowHeight() const {
    return m_i_reportrow_height;
}
void Common_Reportrow::setIReportrowHeight(const qint32 &i_reportrow_height) {
    m_i_reportrow_height = i_reportrow_height;
    m_i_reportrow_height_isSet = true;
}

bool Common_Reportrow::is_i_reportrow_height_Set() const{
    return m_i_reportrow_height_isSet;
}

bool Common_Reportrow::is_i_reportrow_height_Valid() const{
    return m_i_reportrow_height_isValid;
}

bool Common_Reportrow::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_reportcell.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_reportrow_height_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_Reportrow::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_reportcell_isValid && m_i_reportrow_height_isValid && true;
}

} // namespace Ezmaxapi
