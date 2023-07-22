/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommon_Reportsubsectionpart.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Reportsubsectionpart::OAICommon_Reportsubsectionpart(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Reportsubsectionpart::OAICommon_Reportsubsectionpart() {
    this->initializeModel();
}

OAICommon_Reportsubsectionpart::~OAICommon_Reportsubsectionpart() {}

void OAICommon_Reportsubsectionpart::initializeModel() {

    m_e_reportsubsectionpart_type_isSet = false;
    m_e_reportsubsectionpart_type_isValid = false;

    m_a_obj_reportrow_isSet = false;
    m_a_obj_reportrow_isValid = false;
}

void OAICommon_Reportsubsectionpart::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Reportsubsectionpart::fromJsonObject(QJsonObject json) {

    m_e_reportsubsectionpart_type_isValid = ::OpenAPI::fromJsonValue(e_reportsubsectionpart_type, json[QString("eReportsubsectionpartType")]);
    m_e_reportsubsectionpart_type_isSet = !json[QString("eReportsubsectionpartType")].isNull() && m_e_reportsubsectionpart_type_isValid;

    m_a_obj_reportrow_isValid = ::OpenAPI::fromJsonValue(a_obj_reportrow, json[QString("a_objReportrow")]);
    m_a_obj_reportrow_isSet = !json[QString("a_objReportrow")].isNull() && m_a_obj_reportrow_isValid;
}

QString OAICommon_Reportsubsectionpart::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Reportsubsectionpart::asJsonObject() const {
    QJsonObject obj;
    if (m_e_reportsubsectionpart_type_isSet) {
        obj.insert(QString("eReportsubsectionpartType"), ::OpenAPI::toJsonValue(e_reportsubsectionpart_type));
    }
    if (a_obj_reportrow.size() > 0) {
        obj.insert(QString("a_objReportrow"), ::OpenAPI::toJsonValue(a_obj_reportrow));
    }
    return obj;
}

QString OAICommon_Reportsubsectionpart::getEReportsubsectionpartType() const {
    return e_reportsubsectionpart_type;
}
void OAICommon_Reportsubsectionpart::setEReportsubsectionpartType(const QString &e_reportsubsectionpart_type) {
    this->e_reportsubsectionpart_type = e_reportsubsectionpart_type;
    this->m_e_reportsubsectionpart_type_isSet = true;
}

bool OAICommon_Reportsubsectionpart::is_e_reportsubsectionpart_type_Set() const{
    return m_e_reportsubsectionpart_type_isSet;
}

bool OAICommon_Reportsubsectionpart::is_e_reportsubsectionpart_type_Valid() const{
    return m_e_reportsubsectionpart_type_isValid;
}

QList<OAICommon_Reportrow> OAICommon_Reportsubsectionpart::getAObjReportrow() const {
    return a_obj_reportrow;
}
void OAICommon_Reportsubsectionpart::setAObjReportrow(const QList<OAICommon_Reportrow> &a_obj_reportrow) {
    this->a_obj_reportrow = a_obj_reportrow;
    this->m_a_obj_reportrow_isSet = true;
}

bool OAICommon_Reportsubsectionpart::is_a_obj_reportrow_Set() const{
    return m_a_obj_reportrow_isSet;
}

bool OAICommon_Reportsubsectionpart::is_a_obj_reportrow_Valid() const{
    return m_a_obj_reportrow_isValid;
}

bool OAICommon_Reportsubsectionpart::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_e_reportsubsectionpart_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_reportrow.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Reportsubsectionpart::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_reportsubsectionpart_type_isValid && m_a_obj_reportrow_isValid && true;
}

} // namespace OpenAPI