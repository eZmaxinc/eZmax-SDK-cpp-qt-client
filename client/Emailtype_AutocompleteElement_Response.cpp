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

#include "Emailtype_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Emailtype_AutocompleteElement_Response::Emailtype_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Emailtype_AutocompleteElement_Response::Emailtype_AutocompleteElement_Response() {
    this->initializeModel();
}

Emailtype_AutocompleteElement_Response::~Emailtype_AutocompleteElement_Response() {}

void Emailtype_AutocompleteElement_Response::initializeModel() {

    m_pki_emailtype_id_isSet = false;
    m_pki_emailtype_id_isValid = false;

    m_s_emailtype_name_x_isSet = false;
    m_s_emailtype_name_x_isValid = false;

    m_b_emailtype_isactive_isSet = false;
    m_b_emailtype_isactive_isValid = false;
}

void Emailtype_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Emailtype_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_emailtype_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_emailtype_id, json[QString("pkiEmailtypeID")]);
    m_pki_emailtype_id_isSet = !json[QString("pkiEmailtypeID")].isNull() && m_pki_emailtype_id_isValid;

    m_s_emailtype_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_emailtype_name_x, json[QString("sEmailtypeNameX")]);
    m_s_emailtype_name_x_isSet = !json[QString("sEmailtypeNameX")].isNull() && m_s_emailtype_name_x_isValid;

    m_b_emailtype_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_emailtype_isactive, json[QString("bEmailtypeIsactive")]);
    m_b_emailtype_isactive_isSet = !json[QString("bEmailtypeIsactive")].isNull() && m_b_emailtype_isactive_isValid;
}

QString Emailtype_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Emailtype_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_emailtype_id_isSet) {
        obj.insert(QString("pkiEmailtypeID"), ::Ezmaxapi::toJsonValue(m_pki_emailtype_id));
    }
    if (m_s_emailtype_name_x_isSet) {
        obj.insert(QString("sEmailtypeNameX"), ::Ezmaxapi::toJsonValue(m_s_emailtype_name_x));
    }
    if (m_b_emailtype_isactive_isSet) {
        obj.insert(QString("bEmailtypeIsactive"), ::Ezmaxapi::toJsonValue(m_b_emailtype_isactive));
    }
    return obj;
}

qint32 Emailtype_AutocompleteElement_Response::getPkiEmailtypeId() const {
    return m_pki_emailtype_id;
}
void Emailtype_AutocompleteElement_Response::setPkiEmailtypeId(const qint32 &pki_emailtype_id) {
    m_pki_emailtype_id = pki_emailtype_id;
    m_pki_emailtype_id_isSet = true;
}

bool Emailtype_AutocompleteElement_Response::is_pki_emailtype_id_Set() const{
    return m_pki_emailtype_id_isSet;
}

bool Emailtype_AutocompleteElement_Response::is_pki_emailtype_id_Valid() const{
    return m_pki_emailtype_id_isValid;
}

QString Emailtype_AutocompleteElement_Response::getSEmailtypeNameX() const {
    return m_s_emailtype_name_x;
}
void Emailtype_AutocompleteElement_Response::setSEmailtypeNameX(const QString &s_emailtype_name_x) {
    m_s_emailtype_name_x = s_emailtype_name_x;
    m_s_emailtype_name_x_isSet = true;
}

bool Emailtype_AutocompleteElement_Response::is_s_emailtype_name_x_Set() const{
    return m_s_emailtype_name_x_isSet;
}

bool Emailtype_AutocompleteElement_Response::is_s_emailtype_name_x_Valid() const{
    return m_s_emailtype_name_x_isValid;
}

bool Emailtype_AutocompleteElement_Response::isBEmailtypeIsactive() const {
    return m_b_emailtype_isactive;
}
void Emailtype_AutocompleteElement_Response::setBEmailtypeIsactive(const bool &b_emailtype_isactive) {
    m_b_emailtype_isactive = b_emailtype_isactive;
    m_b_emailtype_isactive_isSet = true;
}

bool Emailtype_AutocompleteElement_Response::is_b_emailtype_isactive_Set() const{
    return m_b_emailtype_isactive_isSet;
}

bool Emailtype_AutocompleteElement_Response::is_b_emailtype_isactive_Valid() const{
    return m_b_emailtype_isactive_isValid;
}

bool Emailtype_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_emailtype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_emailtype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_emailtype_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Emailtype_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_emailtype_id_isValid && m_s_emailtype_name_x_isValid && m_b_emailtype_isactive_isValid && true;
}

} // namespace Ezmaxapi
