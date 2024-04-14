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

#include "Ezsignsigningreason_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsigningreason_Request::Ezsignsigningreason_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsigningreason_Request::Ezsignsigningreason_Request() {
    this->initializeModel();
}

Ezsignsigningreason_Request::~Ezsignsigningreason_Request() {}

void Ezsignsigningreason_Request::initializeModel() {

    m_pki_ezsignsigningreason_id_isSet = false;
    m_pki_ezsignsigningreason_id_isValid = false;

    m_obj_ezsignsigningreason_description_isSet = false;
    m_obj_ezsignsigningreason_description_isValid = false;

    m_b_ezsignsigningreason_isactive_isSet = false;
    m_b_ezsignsigningreason_isactive_isValid = false;
}

void Ezsignsigningreason_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsigningreason_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsigningreason_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignsigningreason_id, json[QString("pkiEzsignsigningreasonID")]);
    m_pki_ezsignsigningreason_id_isSet = !json[QString("pkiEzsignsigningreasonID")].isNull() && m_pki_ezsignsigningreason_id_isValid;

    m_obj_ezsignsigningreason_description_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignsigningreason_description, json[QString("objEzsignsigningreasonDescription")]);
    m_obj_ezsignsigningreason_description_isSet = !json[QString("objEzsignsigningreasonDescription")].isNull() && m_obj_ezsignsigningreason_description_isValid;

    m_b_ezsignsigningreason_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignsigningreason_isactive, json[QString("bEzsignsigningreasonIsactive")]);
    m_b_ezsignsigningreason_isactive_isSet = !json[QString("bEzsignsigningreasonIsactive")].isNull() && m_b_ezsignsigningreason_isactive_isValid;
}

QString Ezsignsigningreason_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsigningreason_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsigningreason_id_isSet) {
        obj.insert(QString("pkiEzsignsigningreasonID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignsigningreason_id));
    }
    if (m_obj_ezsignsigningreason_description.isSet()) {
        obj.insert(QString("objEzsignsigningreasonDescription"), ::Ezmaxapi::toJsonValue(m_obj_ezsignsigningreason_description));
    }
    if (m_b_ezsignsigningreason_isactive_isSet) {
        obj.insert(QString("bEzsignsigningreasonIsactive"), ::Ezmaxapi::toJsonValue(m_b_ezsignsigningreason_isactive));
    }
    return obj;
}

qint32 Ezsignsigningreason_Request::getPkiEzsignsigningreasonId() const {
    return m_pki_ezsignsigningreason_id;
}
void Ezsignsigningreason_Request::setPkiEzsignsigningreasonId(const qint32 &pki_ezsignsigningreason_id) {
    m_pki_ezsignsigningreason_id = pki_ezsignsigningreason_id;
    m_pki_ezsignsigningreason_id_isSet = true;
}

bool Ezsignsigningreason_Request::is_pki_ezsignsigningreason_id_Set() const{
    return m_pki_ezsignsigningreason_id_isSet;
}

bool Ezsignsigningreason_Request::is_pki_ezsignsigningreason_id_Valid() const{
    return m_pki_ezsignsigningreason_id_isValid;
}

Multilingual_EzsignsigningreasonDescription Ezsignsigningreason_Request::getObjEzsignsigningreasonDescription() const {
    return m_obj_ezsignsigningreason_description;
}
void Ezsignsigningreason_Request::setObjEzsignsigningreasonDescription(const Multilingual_EzsignsigningreasonDescription &obj_ezsignsigningreason_description) {
    m_obj_ezsignsigningreason_description = obj_ezsignsigningreason_description;
    m_obj_ezsignsigningreason_description_isSet = true;
}

bool Ezsignsigningreason_Request::is_obj_ezsignsigningreason_description_Set() const{
    return m_obj_ezsignsigningreason_description_isSet;
}

bool Ezsignsigningreason_Request::is_obj_ezsignsigningreason_description_Valid() const{
    return m_obj_ezsignsigningreason_description_isValid;
}

bool Ezsignsigningreason_Request::isBEzsignsigningreasonIsactive() const {
    return m_b_ezsignsigningreason_isactive;
}
void Ezsignsigningreason_Request::setBEzsignsigningreasonIsactive(const bool &b_ezsignsigningreason_isactive) {
    m_b_ezsignsigningreason_isactive = b_ezsignsigningreason_isactive;
    m_b_ezsignsigningreason_isactive_isSet = true;
}

bool Ezsignsigningreason_Request::is_b_ezsignsigningreason_isactive_Set() const{
    return m_b_ezsignsigningreason_isactive_isSet;
}

bool Ezsignsigningreason_Request::is_b_ezsignsigningreason_isactive_Valid() const{
    return m_b_ezsignsigningreason_isactive_isValid;
}

bool Ezsignsigningreason_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsigningreason_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_ezsignsigningreason_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignsigningreason_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsigningreason_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignsigningreason_description_isValid && m_b_ezsignsigningreason_isactive_isValid && true;
}

} // namespace Ezmaxapi
