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

#include "OAICommon_Report.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Report::OAICommon_Report(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Report::OAICommon_Report() {
    this->initializeModel();
}

OAICommon_Report::~OAICommon_Report() {}

void OAICommon_Report::initializeModel() {

    m_a_obj_reportsection_isSet = false;
    m_a_obj_reportsection_isValid = false;
}

void OAICommon_Report::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Report::fromJsonObject(QJsonObject json) {

    m_a_obj_reportsection_isValid = ::OpenAPI::fromJsonValue(a_obj_reportsection, json[QString("a_objReportsection")]);
    m_a_obj_reportsection_isSet = !json[QString("a_objReportsection")].isNull() && m_a_obj_reportsection_isValid;
}

QString OAICommon_Report::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Report::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_reportsection.size() > 0) {
        obj.insert(QString("a_objReportsection"), ::OpenAPI::toJsonValue(a_obj_reportsection));
    }
    return obj;
}

QList<OAICommon_Reportsection> OAICommon_Report::getAObjReportsection() const {
    return a_obj_reportsection;
}
void OAICommon_Report::setAObjReportsection(const QList<OAICommon_Reportsection> &a_obj_reportsection) {
    this->a_obj_reportsection = a_obj_reportsection;
    this->m_a_obj_reportsection_isSet = true;
}

bool OAICommon_Report::is_a_obj_reportsection_Set() const{
    return m_a_obj_reportsection_isSet;
}

bool OAICommon_Report::is_a_obj_reportsection_Valid() const{
    return m_a_obj_reportsection_isValid;
}

bool OAICommon_Report::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_reportsection.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Report::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_reportsection_isValid && true;
}

} // namespace OpenAPI
