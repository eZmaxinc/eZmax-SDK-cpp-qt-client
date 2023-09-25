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

#include "OAIDescriptionstatic_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIDescriptionstatic_Response::OAIDescriptionstatic_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDescriptionstatic_Response::OAIDescriptionstatic_Response() {
    this->initializeModel();
}

OAIDescriptionstatic_Response::~OAIDescriptionstatic_Response() {}

void OAIDescriptionstatic_Response::initializeModel() {

    m_pki_descriptionstatic_id_isSet = false;
    m_pki_descriptionstatic_id_isValid = false;

    m_s_descriptionstatic_description_isSet = false;
    m_s_descriptionstatic_description_isValid = false;
}

void OAIDescriptionstatic_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDescriptionstatic_Response::fromJsonObject(QJsonObject json) {

    m_pki_descriptionstatic_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_descriptionstatic_id, json[QString("pkiDescriptionstaticID")]);
    m_pki_descriptionstatic_id_isSet = !json[QString("pkiDescriptionstaticID")].isNull() && m_pki_descriptionstatic_id_isValid;

    m_s_descriptionstatic_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_descriptionstatic_description, json[QString("sDescriptionstaticDescription")]);
    m_s_descriptionstatic_description_isSet = !json[QString("sDescriptionstaticDescription")].isNull() && m_s_descriptionstatic_description_isValid;
}

QString OAIDescriptionstatic_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDescriptionstatic_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_descriptionstatic_id_isSet) {
        obj.insert(QString("pkiDescriptionstaticID"), ::Ezmaxapi::toJsonValue(m_pki_descriptionstatic_id));
    }
    if (m_s_descriptionstatic_description_isSet) {
        obj.insert(QString("sDescriptionstaticDescription"), ::Ezmaxapi::toJsonValue(m_s_descriptionstatic_description));
    }
    return obj;
}

qint32 OAIDescriptionstatic_Response::getPkiDescriptionstaticId() const {
    return m_pki_descriptionstatic_id;
}
void OAIDescriptionstatic_Response::setPkiDescriptionstaticId(const qint32 &pki_descriptionstatic_id) {
    m_pki_descriptionstatic_id = pki_descriptionstatic_id;
    m_pki_descriptionstatic_id_isSet = true;
}

bool OAIDescriptionstatic_Response::is_pki_descriptionstatic_id_Set() const{
    return m_pki_descriptionstatic_id_isSet;
}

bool OAIDescriptionstatic_Response::is_pki_descriptionstatic_id_Valid() const{
    return m_pki_descriptionstatic_id_isValid;
}

QString OAIDescriptionstatic_Response::getSDescriptionstaticDescription() const {
    return m_s_descriptionstatic_description;
}
void OAIDescriptionstatic_Response::setSDescriptionstaticDescription(const QString &s_descriptionstatic_description) {
    m_s_descriptionstatic_description = s_descriptionstatic_description;
    m_s_descriptionstatic_description_isSet = true;
}

bool OAIDescriptionstatic_Response::is_s_descriptionstatic_description_Set() const{
    return m_s_descriptionstatic_description_isSet;
}

bool OAIDescriptionstatic_Response::is_s_descriptionstatic_description_Valid() const{
    return m_s_descriptionstatic_description_isValid;
}

bool OAIDescriptionstatic_Response::isSet() const {
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

bool OAIDescriptionstatic_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_descriptionstatic_id_isValid && m_s_descriptionstatic_description_isValid && true;
}

} // namespace Ezmaxapi
