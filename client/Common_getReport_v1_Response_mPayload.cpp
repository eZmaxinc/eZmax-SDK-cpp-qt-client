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

#include "Common_getReport_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_getReport_v1_Response_mPayload::Common_getReport_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_getReport_v1_Response_mPayload::Common_getReport_v1_Response_mPayload() {
    this->initializeModel();
}

Common_getReport_v1_Response_mPayload::~Common_getReport_v1_Response_mPayload() {}

void Common_getReport_v1_Response_mPayload::initializeModel() {

    m_obj_reportgroup_isSet = false;
    m_obj_reportgroup_isValid = false;
}

void Common_getReport_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_getReport_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_reportgroup_isValid = ::Ezmaxapi::fromJsonValue(m_obj_reportgroup, json[QString("objReportgroup")]);
    m_obj_reportgroup_isSet = !json[QString("objReportgroup")].isNull() && m_obj_reportgroup_isValid;
}

QString Common_getReport_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_getReport_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_reportgroup.isSet()) {
        obj.insert(QString("objReportgroup"), ::Ezmaxapi::toJsonValue(m_obj_reportgroup));
    }
    return obj;
}

Common_Reportgroup Common_getReport_v1_Response_mPayload::getObjReportgroup() const {
    return m_obj_reportgroup;
}
void Common_getReport_v1_Response_mPayload::setObjReportgroup(const Common_Reportgroup &obj_reportgroup) {
    m_obj_reportgroup = obj_reportgroup;
    m_obj_reportgroup_isSet = true;
}

bool Common_getReport_v1_Response_mPayload::is_obj_reportgroup_Set() const{
    return m_obj_reportgroup_isSet;
}

bool Common_getReport_v1_Response_mPayload::is_obj_reportgroup_Valid() const{
    return m_obj_reportgroup_isValid;
}

bool Common_getReport_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_reportgroup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_getReport_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_reportgroup_isValid && true;
}

} // namespace Ezmaxapi
