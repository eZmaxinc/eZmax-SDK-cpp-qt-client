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

#include "Ezsigntemplatedocument_RequestPatch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatedocument_RequestPatch::Ezsigntemplatedocument_RequestPatch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatedocument_RequestPatch::Ezsigntemplatedocument_RequestPatch() {
    this->initializeModel();
}

Ezsigntemplatedocument_RequestPatch::~Ezsigntemplatedocument_RequestPatch() {}

void Ezsigntemplatedocument_RequestPatch::initializeModel() {

    m_s_ezsigntemplatedocument_name_isSet = false;
    m_s_ezsigntemplatedocument_name_isValid = false;
}

void Ezsigntemplatedocument_RequestPatch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatedocument_RequestPatch::fromJsonObject(QJsonObject json) {

    m_s_ezsigntemplatedocument_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatedocument_name, json[QString("sEzsigntemplatedocumentName")]);
    m_s_ezsigntemplatedocument_name_isSet = !json[QString("sEzsigntemplatedocumentName")].isNull() && m_s_ezsigntemplatedocument_name_isValid;
}

QString Ezsigntemplatedocument_RequestPatch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatedocument_RequestPatch::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezsigntemplatedocument_name_isSet) {
        obj.insert(QString("sEzsigntemplatedocumentName"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatedocument_name));
    }
    return obj;
}

QString Ezsigntemplatedocument_RequestPatch::getSEzsigntemplatedocumentName() const {
    return m_s_ezsigntemplatedocument_name;
}
void Ezsigntemplatedocument_RequestPatch::setSEzsigntemplatedocumentName(const QString &s_ezsigntemplatedocument_name) {
    m_s_ezsigntemplatedocument_name = s_ezsigntemplatedocument_name;
    m_s_ezsigntemplatedocument_name_isSet = true;
}

bool Ezsigntemplatedocument_RequestPatch::is_s_ezsigntemplatedocument_name_Set() const{
    return m_s_ezsigntemplatedocument_name_isSet;
}

bool Ezsigntemplatedocument_RequestPatch::is_s_ezsigntemplatedocument_name_Valid() const{
    return m_s_ezsigntemplatedocument_name_isValid;
}

bool Ezsigntemplatedocument_RequestPatch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezsigntemplatedocument_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatedocument_RequestPatch::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
