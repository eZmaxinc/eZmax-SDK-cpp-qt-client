/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Descriptionstatic_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Descriptionstatic_ResponseCompound::Descriptionstatic_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Descriptionstatic_ResponseCompound::Descriptionstatic_ResponseCompound() {
    this->initializeModel();
}

Descriptionstatic_ResponseCompound::~Descriptionstatic_ResponseCompound() {}

void Descriptionstatic_ResponseCompound::initializeModel() {

    m_pki_descriptionstatic_id_isSet = false;
    m_pki_descriptionstatic_id_isValid = false;

    m_s_descriptionstatic_description_isSet = false;
    m_s_descriptionstatic_description_isValid = false;
}

void Descriptionstatic_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Descriptionstatic_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_descriptionstatic_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_descriptionstatic_id, json[QString("pkiDescriptionstaticID")]);
    m_pki_descriptionstatic_id_isSet = !json[QString("pkiDescriptionstaticID")].isNull() && m_pki_descriptionstatic_id_isValid;

    m_s_descriptionstatic_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_descriptionstatic_description, json[QString("sDescriptionstaticDescription")]);
    m_s_descriptionstatic_description_isSet = !json[QString("sDescriptionstaticDescription")].isNull() && m_s_descriptionstatic_description_isValid;
}

QString Descriptionstatic_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Descriptionstatic_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_descriptionstatic_id_isSet) {
        obj.insert(QString("pkiDescriptionstaticID"), ::Ezmaxapi::toJsonValue(m_pki_descriptionstatic_id));
    }
    if (m_s_descriptionstatic_description_isSet) {
        obj.insert(QString("sDescriptionstaticDescription"), ::Ezmaxapi::toJsonValue(m_s_descriptionstatic_description));
    }
    return obj;
}

qint32 Descriptionstatic_ResponseCompound::getPkiDescriptionstaticId() const {
    return m_pki_descriptionstatic_id;
}
void Descriptionstatic_ResponseCompound::setPkiDescriptionstaticId(const qint32 &pki_descriptionstatic_id) {
    m_pki_descriptionstatic_id = pki_descriptionstatic_id;
    m_pki_descriptionstatic_id_isSet = true;
}

bool Descriptionstatic_ResponseCompound::is_pki_descriptionstatic_id_Set() const{
    return m_pki_descriptionstatic_id_isSet;
}

bool Descriptionstatic_ResponseCompound::is_pki_descriptionstatic_id_Valid() const{
    return m_pki_descriptionstatic_id_isValid;
}

QString Descriptionstatic_ResponseCompound::getSDescriptionstaticDescription() const {
    return m_s_descriptionstatic_description;
}
void Descriptionstatic_ResponseCompound::setSDescriptionstaticDescription(const QString &s_descriptionstatic_description) {
    m_s_descriptionstatic_description = s_descriptionstatic_description;
    m_s_descriptionstatic_description_isSet = true;
}

bool Descriptionstatic_ResponseCompound::is_s_descriptionstatic_description_Set() const{
    return m_s_descriptionstatic_description_isSet;
}

bool Descriptionstatic_ResponseCompound::is_s_descriptionstatic_description_Valid() const{
    return m_s_descriptionstatic_description_isValid;
}

bool Descriptionstatic_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_descriptionstatic_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_descriptionstatic_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Descriptionstatic_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_descriptionstatic_id_isValid && m_s_descriptionstatic_description_isValid && true;
}

} // namespace Ezmaxapi
