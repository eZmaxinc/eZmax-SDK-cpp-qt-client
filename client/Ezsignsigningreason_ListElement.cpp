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

#include "Ezsignsigningreason_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsigningreason_ListElement::Ezsignsigningreason_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsigningreason_ListElement::Ezsignsigningreason_ListElement() {
    this->initializeModel();
}

Ezsignsigningreason_ListElement::~Ezsignsigningreason_ListElement() {}

void Ezsignsigningreason_ListElement::initializeModel() {

    m_pki_ezsignsigningreason_id_isSet = false;
    m_pki_ezsignsigningreason_id_isValid = false;

    m_s_ezsignsigningreason_description_x_isSet = false;
    m_s_ezsignsigningreason_description_x_isValid = false;

    m_b_ezsignsigningreason_isactive_isSet = false;
    m_b_ezsignsigningreason_isactive_isValid = false;
}

void Ezsignsigningreason_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsigningreason_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsigningreason_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignsigningreason_id, json[QString("pkiEzsignsigningreasonID")]);
    m_pki_ezsignsigningreason_id_isSet = !json[QString("pkiEzsignsigningreasonID")].isNull() && m_pki_ezsignsigningreason_id_isValid;

    m_s_ezsignsigningreason_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignsigningreason_description_x, json[QString("sEzsignsigningreasonDescriptionX")]);
    m_s_ezsignsigningreason_description_x_isSet = !json[QString("sEzsignsigningreasonDescriptionX")].isNull() && m_s_ezsignsigningreason_description_x_isValid;

    m_b_ezsignsigningreason_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignsigningreason_isactive, json[QString("bEzsignsigningreasonIsactive")]);
    m_b_ezsignsigningreason_isactive_isSet = !json[QString("bEzsignsigningreasonIsactive")].isNull() && m_b_ezsignsigningreason_isactive_isValid;
}

QString Ezsignsigningreason_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsigningreason_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsigningreason_id_isSet) {
        obj.insert(QString("pkiEzsignsigningreasonID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignsigningreason_id));
    }
    if (m_s_ezsignsigningreason_description_x_isSet) {
        obj.insert(QString("sEzsignsigningreasonDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_ezsignsigningreason_description_x));
    }
    if (m_b_ezsignsigningreason_isactive_isSet) {
        obj.insert(QString("bEzsignsigningreasonIsactive"), ::Ezmaxapi::toJsonValue(m_b_ezsignsigningreason_isactive));
    }
    return obj;
}

qint32 Ezsignsigningreason_ListElement::getPkiEzsignsigningreasonId() const {
    return m_pki_ezsignsigningreason_id;
}
void Ezsignsigningreason_ListElement::setPkiEzsignsigningreasonId(const qint32 &pki_ezsignsigningreason_id) {
    m_pki_ezsignsigningreason_id = pki_ezsignsigningreason_id;
    m_pki_ezsignsigningreason_id_isSet = true;
}

bool Ezsignsigningreason_ListElement::is_pki_ezsignsigningreason_id_Set() const{
    return m_pki_ezsignsigningreason_id_isSet;
}

bool Ezsignsigningreason_ListElement::is_pki_ezsignsigningreason_id_Valid() const{
    return m_pki_ezsignsigningreason_id_isValid;
}

QString Ezsignsigningreason_ListElement::getSEzsignsigningreasonDescriptionX() const {
    return m_s_ezsignsigningreason_description_x;
}
void Ezsignsigningreason_ListElement::setSEzsignsigningreasonDescriptionX(const QString &s_ezsignsigningreason_description_x) {
    m_s_ezsignsigningreason_description_x = s_ezsignsigningreason_description_x;
    m_s_ezsignsigningreason_description_x_isSet = true;
}

bool Ezsignsigningreason_ListElement::is_s_ezsignsigningreason_description_x_Set() const{
    return m_s_ezsignsigningreason_description_x_isSet;
}

bool Ezsignsigningreason_ListElement::is_s_ezsignsigningreason_description_x_Valid() const{
    return m_s_ezsignsigningreason_description_x_isValid;
}

bool Ezsignsigningreason_ListElement::isBEzsignsigningreasonIsactive() const {
    return m_b_ezsignsigningreason_isactive;
}
void Ezsignsigningreason_ListElement::setBEzsignsigningreasonIsactive(const bool &b_ezsignsigningreason_isactive) {
    m_b_ezsignsigningreason_isactive = b_ezsignsigningreason_isactive;
    m_b_ezsignsigningreason_isactive_isSet = true;
}

bool Ezsignsigningreason_ListElement::is_b_ezsignsigningreason_isactive_Set() const{
    return m_b_ezsignsigningreason_isactive_isSet;
}

bool Ezsignsigningreason_ListElement::is_b_ezsignsigningreason_isactive_Valid() const{
    return m_b_ezsignsigningreason_isactive_isValid;
}

bool Ezsignsigningreason_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsigningreason_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignsigningreason_description_x_isSet) {
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

bool Ezsignsigningreason_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignsigningreason_id_isValid && m_s_ezsignsigningreason_description_x_isValid && m_b_ezsignsigningreason_isactive_isValid && true;
}

} // namespace Ezmaxapi
