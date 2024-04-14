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

#include "Ezsigntemplateglobalsigner_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplateglobalsigner_Response::Ezsigntemplateglobalsigner_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplateglobalsigner_Response::Ezsigntemplateglobalsigner_Response() {
    this->initializeModel();
}

Ezsigntemplateglobalsigner_Response::~Ezsigntemplateglobalsigner_Response() {}

void Ezsigntemplateglobalsigner_Response::initializeModel() {

    m_pki_ezsigntemplateglobalsigner_id_isSet = false;
    m_pki_ezsigntemplateglobalsigner_id_isValid = false;

    m_fki_ezsigntemplateglobal_id_isSet = false;
    m_fki_ezsigntemplateglobal_id_isValid = false;

    m_s_ezsigntemplateglobalsigner_description_isSet = false;
    m_s_ezsigntemplateglobalsigner_description_isValid = false;
}

void Ezsigntemplateglobalsigner_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplateglobalsigner_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplateglobalsigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplateglobalsigner_id, json[QString("pkiEzsigntemplateglobalsignerID")]);
    m_pki_ezsigntemplateglobalsigner_id_isSet = !json[QString("pkiEzsigntemplateglobalsignerID")].isNull() && m_pki_ezsigntemplateglobalsigner_id_isValid;

    m_fki_ezsigntemplateglobal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsigntemplateglobal_id, json[QString("fkiEzsigntemplateglobalID")]);
    m_fki_ezsigntemplateglobal_id_isSet = !json[QString("fkiEzsigntemplateglobalID")].isNull() && m_fki_ezsigntemplateglobal_id_isValid;

    m_s_ezsigntemplateglobalsigner_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplateglobalsigner_description, json[QString("sEzsigntemplateglobalsignerDescription")]);
    m_s_ezsigntemplateglobalsigner_description_isSet = !json[QString("sEzsigntemplateglobalsignerDescription")].isNull() && m_s_ezsigntemplateglobalsigner_description_isValid;
}

QString Ezsigntemplateglobalsigner_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplateglobalsigner_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplateglobalsigner_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateglobalsignerID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplateglobalsigner_id));
    }
    if (m_fki_ezsigntemplateglobal_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateglobalID"), ::Ezmaxapi::toJsonValue(m_fki_ezsigntemplateglobal_id));
    }
    if (m_s_ezsigntemplateglobalsigner_description_isSet) {
        obj.insert(QString("sEzsigntemplateglobalsignerDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplateglobalsigner_description));
    }
    return obj;
}

qint32 Ezsigntemplateglobalsigner_Response::getPkiEzsigntemplateglobalsignerId() const {
    return m_pki_ezsigntemplateglobalsigner_id;
}
void Ezsigntemplateglobalsigner_Response::setPkiEzsigntemplateglobalsignerId(const qint32 &pki_ezsigntemplateglobalsigner_id) {
    m_pki_ezsigntemplateglobalsigner_id = pki_ezsigntemplateglobalsigner_id;
    m_pki_ezsigntemplateglobalsigner_id_isSet = true;
}

bool Ezsigntemplateglobalsigner_Response::is_pki_ezsigntemplateglobalsigner_id_Set() const{
    return m_pki_ezsigntemplateglobalsigner_id_isSet;
}

bool Ezsigntemplateglobalsigner_Response::is_pki_ezsigntemplateglobalsigner_id_Valid() const{
    return m_pki_ezsigntemplateglobalsigner_id_isValid;
}

qint32 Ezsigntemplateglobalsigner_Response::getFkiEzsigntemplateglobalId() const {
    return m_fki_ezsigntemplateglobal_id;
}
void Ezsigntemplateglobalsigner_Response::setFkiEzsigntemplateglobalId(const qint32 &fki_ezsigntemplateglobal_id) {
    m_fki_ezsigntemplateglobal_id = fki_ezsigntemplateglobal_id;
    m_fki_ezsigntemplateglobal_id_isSet = true;
}

bool Ezsigntemplateglobalsigner_Response::is_fki_ezsigntemplateglobal_id_Set() const{
    return m_fki_ezsigntemplateglobal_id_isSet;
}

bool Ezsigntemplateglobalsigner_Response::is_fki_ezsigntemplateglobal_id_Valid() const{
    return m_fki_ezsigntemplateglobal_id_isValid;
}

QString Ezsigntemplateglobalsigner_Response::getSEzsigntemplateglobalsignerDescription() const {
    return m_s_ezsigntemplateglobalsigner_description;
}
void Ezsigntemplateglobalsigner_Response::setSEzsigntemplateglobalsignerDescription(const QString &s_ezsigntemplateglobalsigner_description) {
    m_s_ezsigntemplateglobalsigner_description = s_ezsigntemplateglobalsigner_description;
    m_s_ezsigntemplateglobalsigner_description_isSet = true;
}

bool Ezsigntemplateglobalsigner_Response::is_s_ezsigntemplateglobalsigner_description_Set() const{
    return m_s_ezsigntemplateglobalsigner_description_isSet;
}

bool Ezsigntemplateglobalsigner_Response::is_s_ezsigntemplateglobalsigner_description_Valid() const{
    return m_s_ezsigntemplateglobalsigner_description_isValid;
}

bool Ezsigntemplateglobalsigner_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplateglobalsigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplateglobal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplateglobalsigner_description_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplateglobalsigner_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplateglobalsigner_id_isValid && m_fki_ezsigntemplateglobal_id_isValid && m_s_ezsigntemplateglobalsigner_description_isValid && true;
}

} // namespace Ezmaxapi