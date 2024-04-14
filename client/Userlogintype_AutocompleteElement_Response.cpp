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

#include "Userlogintype_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Userlogintype_AutocompleteElement_Response::Userlogintype_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Userlogintype_AutocompleteElement_Response::Userlogintype_AutocompleteElement_Response() {
    this->initializeModel();
}

Userlogintype_AutocompleteElement_Response::~Userlogintype_AutocompleteElement_Response() {}

void Userlogintype_AutocompleteElement_Response::initializeModel() {

    m_pki_userlogintype_id_isSet = false;
    m_pki_userlogintype_id_isValid = false;

    m_s_userlogintype_description_x_isSet = false;
    m_s_userlogintype_description_x_isValid = false;

    m_b_userlogintype_isactive_isSet = false;
    m_b_userlogintype_isactive_isValid = false;
}

void Userlogintype_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Userlogintype_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_userlogintype_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_userlogintype_id, json[QString("pkiUserlogintypeID")]);
    m_pki_userlogintype_id_isSet = !json[QString("pkiUserlogintypeID")].isNull() && m_pki_userlogintype_id_isValid;

    m_s_userlogintype_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_userlogintype_description_x, json[QString("sUserlogintypeDescriptionX")]);
    m_s_userlogintype_description_x_isSet = !json[QString("sUserlogintypeDescriptionX")].isNull() && m_s_userlogintype_description_x_isValid;

    m_b_userlogintype_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_userlogintype_isactive, json[QString("bUserlogintypeIsactive")]);
    m_b_userlogintype_isactive_isSet = !json[QString("bUserlogintypeIsactive")].isNull() && m_b_userlogintype_isactive_isValid;
}

QString Userlogintype_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Userlogintype_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_userlogintype_id_isSet) {
        obj.insert(QString("pkiUserlogintypeID"), ::Ezmaxapi::toJsonValue(m_pki_userlogintype_id));
    }
    if (m_s_userlogintype_description_x_isSet) {
        obj.insert(QString("sUserlogintypeDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_userlogintype_description_x));
    }
    if (m_b_userlogintype_isactive_isSet) {
        obj.insert(QString("bUserlogintypeIsactive"), ::Ezmaxapi::toJsonValue(m_b_userlogintype_isactive));
    }
    return obj;
}

qint32 Userlogintype_AutocompleteElement_Response::getPkiUserlogintypeId() const {
    return m_pki_userlogintype_id;
}
void Userlogintype_AutocompleteElement_Response::setPkiUserlogintypeId(const qint32 &pki_userlogintype_id) {
    m_pki_userlogintype_id = pki_userlogintype_id;
    m_pki_userlogintype_id_isSet = true;
}

bool Userlogintype_AutocompleteElement_Response::is_pki_userlogintype_id_Set() const{
    return m_pki_userlogintype_id_isSet;
}

bool Userlogintype_AutocompleteElement_Response::is_pki_userlogintype_id_Valid() const{
    return m_pki_userlogintype_id_isValid;
}

QString Userlogintype_AutocompleteElement_Response::getSUserlogintypeDescriptionX() const {
    return m_s_userlogintype_description_x;
}
void Userlogintype_AutocompleteElement_Response::setSUserlogintypeDescriptionX(const QString &s_userlogintype_description_x) {
    m_s_userlogintype_description_x = s_userlogintype_description_x;
    m_s_userlogintype_description_x_isSet = true;
}

bool Userlogintype_AutocompleteElement_Response::is_s_userlogintype_description_x_Set() const{
    return m_s_userlogintype_description_x_isSet;
}

bool Userlogintype_AutocompleteElement_Response::is_s_userlogintype_description_x_Valid() const{
    return m_s_userlogintype_description_x_isValid;
}

bool Userlogintype_AutocompleteElement_Response::isBUserlogintypeIsactive() const {
    return m_b_userlogintype_isactive;
}
void Userlogintype_AutocompleteElement_Response::setBUserlogintypeIsactive(const bool &b_userlogintype_isactive) {
    m_b_userlogintype_isactive = b_userlogintype_isactive;
    m_b_userlogintype_isactive_isSet = true;
}

bool Userlogintype_AutocompleteElement_Response::is_b_userlogintype_isactive_Set() const{
    return m_b_userlogintype_isactive_isSet;
}

bool Userlogintype_AutocompleteElement_Response::is_b_userlogintype_isactive_Valid() const{
    return m_b_userlogintype_isactive_isValid;
}

bool Userlogintype_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_userlogintype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_userlogintype_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_userlogintype_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Userlogintype_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_userlogintype_id_isValid && m_s_userlogintype_description_x_isValid && m_b_userlogintype_isactive_isValid && true;
}

} // namespace Ezmaxapi