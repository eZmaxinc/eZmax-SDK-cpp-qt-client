/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatedocument_RequestPatch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_RequestPatch::OAIEzsigntemplatedocument_RequestPatch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_RequestPatch::OAIEzsigntemplatedocument_RequestPatch() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_RequestPatch::~OAIEzsigntemplatedocument_RequestPatch() {}

void OAIEzsigntemplatedocument_RequestPatch::initializeModel() {

    m_s_ezsigntemplatedocument_name_isSet = false;
    m_s_ezsigntemplatedocument_name_isValid = false;
}

void OAIEzsigntemplatedocument_RequestPatch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_RequestPatch::fromJsonObject(QJsonObject json) {

    m_s_ezsigntemplatedocument_name_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatedocument_name, json[QString("sEzsigntemplatedocumentName")]);
    m_s_ezsigntemplatedocument_name_isSet = !json[QString("sEzsigntemplatedocumentName")].isNull() && m_s_ezsigntemplatedocument_name_isValid;
}

QString OAIEzsigntemplatedocument_RequestPatch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_RequestPatch::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezsigntemplatedocument_name_isSet) {
        obj.insert(QString("sEzsigntemplatedocumentName"), ::OpenAPI::toJsonValue(s_ezsigntemplatedocument_name));
    }
    return obj;
}

QString OAIEzsigntemplatedocument_RequestPatch::getSEzsigntemplatedocumentName() const {
    return s_ezsigntemplatedocument_name;
}
void OAIEzsigntemplatedocument_RequestPatch::setSEzsigntemplatedocumentName(const QString &s_ezsigntemplatedocument_name) {
    this->s_ezsigntemplatedocument_name = s_ezsigntemplatedocument_name;
    this->m_s_ezsigntemplatedocument_name_isSet = true;
}

bool OAIEzsigntemplatedocument_RequestPatch::is_s_ezsigntemplatedocument_name_Set() const{
    return m_s_ezsigntemplatedocument_name_isSet;
}

bool OAIEzsigntemplatedocument_RequestPatch::is_s_ezsigntemplatedocument_name_Valid() const{
    return m_s_ezsigntemplatedocument_name_isValid;
}

bool OAIEzsigntemplatedocument_RequestPatch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezsigntemplatedocument_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_RequestPatch::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
