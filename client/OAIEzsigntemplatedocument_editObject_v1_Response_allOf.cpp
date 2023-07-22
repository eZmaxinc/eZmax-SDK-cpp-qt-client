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

#include "OAIEzsigntemplatedocument_editObject_v1_Response_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_editObject_v1_Response_allOf::OAIEzsigntemplatedocument_editObject_v1_Response_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_editObject_v1_Response_allOf::OAIEzsigntemplatedocument_editObject_v1_Response_allOf() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_editObject_v1_Response_allOf::~OAIEzsigntemplatedocument_editObject_v1_Response_allOf() {}

void OAIEzsigntemplatedocument_editObject_v1_Response_allOf::initializeModel() {

    m_a_obj_warning_isSet = false;
    m_a_obj_warning_isValid = false;
}

void OAIEzsigntemplatedocument_editObject_v1_Response_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_editObject_v1_Response_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_warning_isValid = ::OpenAPI::fromJsonValue(a_obj_warning, json[QString("a_objWarning")]);
    m_a_obj_warning_isSet = !json[QString("a_objWarning")].isNull() && m_a_obj_warning_isValid;
}

QString OAIEzsigntemplatedocument_editObject_v1_Response_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_editObject_v1_Response_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_warning.size() > 0) {
        obj.insert(QString("a_objWarning"), ::OpenAPI::toJsonValue(a_obj_warning));
    }
    return obj;
}

QList<OAICommon_Response_Warning> OAIEzsigntemplatedocument_editObject_v1_Response_allOf::getAObjWarning() const {
    return a_obj_warning;
}
void OAIEzsigntemplatedocument_editObject_v1_Response_allOf::setAObjWarning(const QList<OAICommon_Response_Warning> &a_obj_warning) {
    this->a_obj_warning = a_obj_warning;
    this->m_a_obj_warning_isSet = true;
}

bool OAIEzsigntemplatedocument_editObject_v1_Response_allOf::is_a_obj_warning_Set() const{
    return m_a_obj_warning_isSet;
}

bool OAIEzsigntemplatedocument_editObject_v1_Response_allOf::is_a_obj_warning_Valid() const{
    return m_a_obj_warning_isValid;
}

bool OAIEzsigntemplatedocument_editObject_v1_Response_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_warning.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_editObject_v1_Response_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
