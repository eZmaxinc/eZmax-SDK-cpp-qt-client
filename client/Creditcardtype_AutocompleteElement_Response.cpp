/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Creditcardtype_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Creditcardtype_AutocompleteElement_Response::Creditcardtype_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Creditcardtype_AutocompleteElement_Response::Creditcardtype_AutocompleteElement_Response() {
    this->initializeModel();
}

Creditcardtype_AutocompleteElement_Response::~Creditcardtype_AutocompleteElement_Response() {}

void Creditcardtype_AutocompleteElement_Response::initializeModel() {

    m_s_creditcardtype_name_isSet = false;
    m_s_creditcardtype_name_isValid = false;

    m_pki_creditcardtype_id_isSet = false;
    m_pki_creditcardtype_id_isValid = false;

    m_e_creditcardtype_codename_isSet = false;
    m_e_creditcardtype_codename_isValid = false;
}

void Creditcardtype_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Creditcardtype_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_creditcardtype_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_creditcardtype_name, json[QString("sCreditcardtypeName")]);
    m_s_creditcardtype_name_isSet = !json[QString("sCreditcardtypeName")].isNull() && m_s_creditcardtype_name_isValid;

    m_pki_creditcardtype_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_creditcardtype_id, json[QString("pkiCreditcardtypeID")]);
    m_pki_creditcardtype_id_isSet = !json[QString("pkiCreditcardtypeID")].isNull() && m_pki_creditcardtype_id_isValid;

    m_e_creditcardtype_codename_isValid = ::Ezmaxapi::fromJsonValue(m_e_creditcardtype_codename, json[QString("eCreditcardtypeCodename")]);
    m_e_creditcardtype_codename_isSet = !json[QString("eCreditcardtypeCodename")].isNull() && m_e_creditcardtype_codename_isValid;
}

QString Creditcardtype_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Creditcardtype_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_creditcardtype_name_isSet) {
        obj.insert(QString("sCreditcardtypeName"), ::Ezmaxapi::toJsonValue(m_s_creditcardtype_name));
    }
    if (m_pki_creditcardtype_id_isSet) {
        obj.insert(QString("pkiCreditcardtypeID"), ::Ezmaxapi::toJsonValue(m_pki_creditcardtype_id));
    }
    if (m_e_creditcardtype_codename.isSet()) {
        obj.insert(QString("eCreditcardtypeCodename"), ::Ezmaxapi::toJsonValue(m_e_creditcardtype_codename));
    }
    return obj;
}

QString Creditcardtype_AutocompleteElement_Response::getSCreditcardtypeName() const {
    return m_s_creditcardtype_name;
}
void Creditcardtype_AutocompleteElement_Response::setSCreditcardtypeName(const QString &s_creditcardtype_name) {
    m_s_creditcardtype_name = s_creditcardtype_name;
    m_s_creditcardtype_name_isSet = true;
}

bool Creditcardtype_AutocompleteElement_Response::is_s_creditcardtype_name_Set() const{
    return m_s_creditcardtype_name_isSet;
}

bool Creditcardtype_AutocompleteElement_Response::is_s_creditcardtype_name_Valid() const{
    return m_s_creditcardtype_name_isValid;
}

qint32 Creditcardtype_AutocompleteElement_Response::getPkiCreditcardtypeId() const {
    return m_pki_creditcardtype_id;
}
void Creditcardtype_AutocompleteElement_Response::setPkiCreditcardtypeId(const qint32 &pki_creditcardtype_id) {
    m_pki_creditcardtype_id = pki_creditcardtype_id;
    m_pki_creditcardtype_id_isSet = true;
}

bool Creditcardtype_AutocompleteElement_Response::is_pki_creditcardtype_id_Set() const{
    return m_pki_creditcardtype_id_isSet;
}

bool Creditcardtype_AutocompleteElement_Response::is_pki_creditcardtype_id_Valid() const{
    return m_pki_creditcardtype_id_isValid;
}

Field_eCreditcardtypeCodename Creditcardtype_AutocompleteElement_Response::getECreditcardtypeCodename() const {
    return m_e_creditcardtype_codename;
}
void Creditcardtype_AutocompleteElement_Response::setECreditcardtypeCodename(const Field_eCreditcardtypeCodename &e_creditcardtype_codename) {
    m_e_creditcardtype_codename = e_creditcardtype_codename;
    m_e_creditcardtype_codename_isSet = true;
}

bool Creditcardtype_AutocompleteElement_Response::is_e_creditcardtype_codename_Set() const{
    return m_e_creditcardtype_codename_isSet;
}

bool Creditcardtype_AutocompleteElement_Response::is_e_creditcardtype_codename_Valid() const{
    return m_e_creditcardtype_codename_isValid;
}

bool Creditcardtype_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_creditcardtype_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_creditcardtype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_creditcardtype_codename.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Creditcardtype_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_creditcardtype_name_isValid && m_pki_creditcardtype_id_isValid && m_e_creditcardtype_codename_isValid && true;
}

} // namespace Ezmaxapi
