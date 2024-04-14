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

#include "Variableexpense_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Variableexpense_AutocompleteElement_Response::Variableexpense_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Variableexpense_AutocompleteElement_Response::Variableexpense_AutocompleteElement_Response() {
    this->initializeModel();
}

Variableexpense_AutocompleteElement_Response::~Variableexpense_AutocompleteElement_Response() {}

void Variableexpense_AutocompleteElement_Response::initializeModel() {

    m_s_variableexpense_description_x_isSet = false;
    m_s_variableexpense_description_x_isValid = false;

    m_pki_variableexpense_id_isSet = false;
    m_pki_variableexpense_id_isValid = false;

    m_b_variableexpense_isactive_isSet = false;
    m_b_variableexpense_isactive_isValid = false;
}

void Variableexpense_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Variableexpense_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_variableexpense_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_variableexpense_description_x, json[QString("sVariableexpenseDescriptionX")]);
    m_s_variableexpense_description_x_isSet = !json[QString("sVariableexpenseDescriptionX")].isNull() && m_s_variableexpense_description_x_isValid;

    m_pki_variableexpense_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_variableexpense_id, json[QString("pkiVariableexpenseID")]);
    m_pki_variableexpense_id_isSet = !json[QString("pkiVariableexpenseID")].isNull() && m_pki_variableexpense_id_isValid;

    m_b_variableexpense_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_variableexpense_isactive, json[QString("bVariableexpenseIsactive")]);
    m_b_variableexpense_isactive_isSet = !json[QString("bVariableexpenseIsactive")].isNull() && m_b_variableexpense_isactive_isValid;
}

QString Variableexpense_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Variableexpense_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_variableexpense_description_x_isSet) {
        obj.insert(QString("sVariableexpenseDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_variableexpense_description_x));
    }
    if (m_pki_variableexpense_id_isSet) {
        obj.insert(QString("pkiVariableexpenseID"), ::Ezmaxapi::toJsonValue(m_pki_variableexpense_id));
    }
    if (m_b_variableexpense_isactive_isSet) {
        obj.insert(QString("bVariableexpenseIsactive"), ::Ezmaxapi::toJsonValue(m_b_variableexpense_isactive));
    }
    return obj;
}

QString Variableexpense_AutocompleteElement_Response::getSVariableexpenseDescriptionX() const {
    return m_s_variableexpense_description_x;
}
void Variableexpense_AutocompleteElement_Response::setSVariableexpenseDescriptionX(const QString &s_variableexpense_description_x) {
    m_s_variableexpense_description_x = s_variableexpense_description_x;
    m_s_variableexpense_description_x_isSet = true;
}

bool Variableexpense_AutocompleteElement_Response::is_s_variableexpense_description_x_Set() const{
    return m_s_variableexpense_description_x_isSet;
}

bool Variableexpense_AutocompleteElement_Response::is_s_variableexpense_description_x_Valid() const{
    return m_s_variableexpense_description_x_isValid;
}

qint32 Variableexpense_AutocompleteElement_Response::getPkiVariableexpenseId() const {
    return m_pki_variableexpense_id;
}
void Variableexpense_AutocompleteElement_Response::setPkiVariableexpenseId(const qint32 &pki_variableexpense_id) {
    m_pki_variableexpense_id = pki_variableexpense_id;
    m_pki_variableexpense_id_isSet = true;
}

bool Variableexpense_AutocompleteElement_Response::is_pki_variableexpense_id_Set() const{
    return m_pki_variableexpense_id_isSet;
}

bool Variableexpense_AutocompleteElement_Response::is_pki_variableexpense_id_Valid() const{
    return m_pki_variableexpense_id_isValid;
}

bool Variableexpense_AutocompleteElement_Response::isBVariableexpenseIsactive() const {
    return m_b_variableexpense_isactive;
}
void Variableexpense_AutocompleteElement_Response::setBVariableexpenseIsactive(const bool &b_variableexpense_isactive) {
    m_b_variableexpense_isactive = b_variableexpense_isactive;
    m_b_variableexpense_isactive_isSet = true;
}

bool Variableexpense_AutocompleteElement_Response::is_b_variableexpense_isactive_Set() const{
    return m_b_variableexpense_isactive_isSet;
}

bool Variableexpense_AutocompleteElement_Response::is_b_variableexpense_isactive_Valid() const{
    return m_b_variableexpense_isactive_isValid;
}

bool Variableexpense_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_variableexpense_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_variableexpense_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_variableexpense_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Variableexpense_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_variableexpense_description_x_isValid && m_pki_variableexpense_id_isValid && m_b_variableexpense_isactive_isValid && true;
}

} // namespace Ezmaxapi
