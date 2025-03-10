/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Common_Reportcolumn.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Reportcolumn::Common_Reportcolumn(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Reportcolumn::Common_Reportcolumn() {
    this->initializeModel();
}

Common_Reportcolumn::~Common_Reportcolumn() {}

void Common_Reportcolumn::initializeModel() {

    m_obj_reportcellstyle_default_isSet = false;
    m_obj_reportcellstyle_default_isValid = false;

    m_i_reportcolumn_width_isSet = false;
    m_i_reportcolumn_width_isValid = false;

    m_e_reportcolumn_type_isSet = false;
    m_e_reportcolumn_type_isValid = false;
}

void Common_Reportcolumn::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Reportcolumn::fromJsonObject(QJsonObject json) {

    m_obj_reportcellstyle_default_isValid = ::Ezmaxapi::fromJsonValue(m_obj_reportcellstyle_default, json[QString("objReportcellstyleDefault")]);
    m_obj_reportcellstyle_default_isSet = !json[QString("objReportcellstyleDefault")].isNull() && m_obj_reportcellstyle_default_isValid;

    m_i_reportcolumn_width_isValid = ::Ezmaxapi::fromJsonValue(m_i_reportcolumn_width, json[QString("iReportcolumnWidth")]);
    m_i_reportcolumn_width_isSet = !json[QString("iReportcolumnWidth")].isNull() && m_i_reportcolumn_width_isValid;

    m_e_reportcolumn_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_reportcolumn_type, json[QString("eReportcolumnType")]);
    m_e_reportcolumn_type_isSet = !json[QString("eReportcolumnType")].isNull() && m_e_reportcolumn_type_isValid;
}

QString Common_Reportcolumn::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Reportcolumn::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_reportcellstyle_default.isSet()) {
        obj.insert(QString("objReportcellstyleDefault"), ::Ezmaxapi::toJsonValue(m_obj_reportcellstyle_default));
    }
    if (m_i_reportcolumn_width_isSet) {
        obj.insert(QString("iReportcolumnWidth"), ::Ezmaxapi::toJsonValue(m_i_reportcolumn_width));
    }
    if (m_e_reportcolumn_type.isSet()) {
        obj.insert(QString("eReportcolumnType"), ::Ezmaxapi::toJsonValue(m_e_reportcolumn_type));
    }
    return obj;
}

Common_Reportcellstyle Common_Reportcolumn::getObjReportcellstyleDefault() const {
    return m_obj_reportcellstyle_default;
}
void Common_Reportcolumn::setObjReportcellstyleDefault(const Common_Reportcellstyle &obj_reportcellstyle_default) {
    m_obj_reportcellstyle_default = obj_reportcellstyle_default;
    m_obj_reportcellstyle_default_isSet = true;
}

bool Common_Reportcolumn::is_obj_reportcellstyle_default_Set() const{
    return m_obj_reportcellstyle_default_isSet;
}

bool Common_Reportcolumn::is_obj_reportcellstyle_default_Valid() const{
    return m_obj_reportcellstyle_default_isValid;
}

qint32 Common_Reportcolumn::getIReportcolumnWidth() const {
    return m_i_reportcolumn_width;
}
void Common_Reportcolumn::setIReportcolumnWidth(const qint32 &i_reportcolumn_width) {
    m_i_reportcolumn_width = i_reportcolumn_width;
    m_i_reportcolumn_width_isSet = true;
}

bool Common_Reportcolumn::is_i_reportcolumn_width_Set() const{
    return m_i_reportcolumn_width_isSet;
}

bool Common_Reportcolumn::is_i_reportcolumn_width_Valid() const{
    return m_i_reportcolumn_width_isValid;
}

Enum_ReportdataType Common_Reportcolumn::getEReportcolumnType() const {
    return m_e_reportcolumn_type;
}
void Common_Reportcolumn::setEReportcolumnType(const Enum_ReportdataType &e_reportcolumn_type) {
    m_e_reportcolumn_type = e_reportcolumn_type;
    m_e_reportcolumn_type_isSet = true;
}

bool Common_Reportcolumn::is_e_reportcolumn_type_Set() const{
    return m_e_reportcolumn_type_isSet;
}

bool Common_Reportcolumn::is_e_reportcolumn_type_Valid() const{
    return m_e_reportcolumn_type_isValid;
}

bool Common_Reportcolumn::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_reportcellstyle_default.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_reportcolumn_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_reportcolumn_type.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_Reportcolumn::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_reportcellstyle_default_isValid && m_i_reportcolumn_width_isValid && m_e_reportcolumn_type_isValid && true;
}

} // namespace Ezmaxapi
