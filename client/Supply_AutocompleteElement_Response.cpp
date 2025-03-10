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

#include "Supply_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Supply_AutocompleteElement_Response::Supply_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Supply_AutocompleteElement_Response::Supply_AutocompleteElement_Response() {
    this->initializeModel();
}

Supply_AutocompleteElement_Response::~Supply_AutocompleteElement_Response() {}

void Supply_AutocompleteElement_Response::initializeModel() {

    m_pki_supply_id_isSet = false;
    m_pki_supply_id_isValid = false;

    m_s_supply_description_x_isSet = false;
    m_s_supply_description_x_isValid = false;

    m_b_supply_isactive_isSet = false;
    m_b_supply_isactive_isValid = false;
}

void Supply_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Supply_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_supply_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_supply_id, json[QString("pkiSupplyID")]);
    m_pki_supply_id_isSet = !json[QString("pkiSupplyID")].isNull() && m_pki_supply_id_isValid;

    m_s_supply_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_supply_description_x, json[QString("sSupplyDescriptionX")]);
    m_s_supply_description_x_isSet = !json[QString("sSupplyDescriptionX")].isNull() && m_s_supply_description_x_isValid;

    m_b_supply_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_supply_isactive, json[QString("bSupplyIsactive")]);
    m_b_supply_isactive_isSet = !json[QString("bSupplyIsactive")].isNull() && m_b_supply_isactive_isValid;
}

QString Supply_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Supply_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_supply_id_isSet) {
        obj.insert(QString("pkiSupplyID"), ::Ezmaxapi::toJsonValue(m_pki_supply_id));
    }
    if (m_s_supply_description_x_isSet) {
        obj.insert(QString("sSupplyDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_supply_description_x));
    }
    if (m_b_supply_isactive_isSet) {
        obj.insert(QString("bSupplyIsactive"), ::Ezmaxapi::toJsonValue(m_b_supply_isactive));
    }
    return obj;
}

qint32 Supply_AutocompleteElement_Response::getPkiSupplyId() const {
    return m_pki_supply_id;
}
void Supply_AutocompleteElement_Response::setPkiSupplyId(const qint32 &pki_supply_id) {
    m_pki_supply_id = pki_supply_id;
    m_pki_supply_id_isSet = true;
}

bool Supply_AutocompleteElement_Response::is_pki_supply_id_Set() const{
    return m_pki_supply_id_isSet;
}

bool Supply_AutocompleteElement_Response::is_pki_supply_id_Valid() const{
    return m_pki_supply_id_isValid;
}

QString Supply_AutocompleteElement_Response::getSSupplyDescriptionX() const {
    return m_s_supply_description_x;
}
void Supply_AutocompleteElement_Response::setSSupplyDescriptionX(const QString &s_supply_description_x) {
    m_s_supply_description_x = s_supply_description_x;
    m_s_supply_description_x_isSet = true;
}

bool Supply_AutocompleteElement_Response::is_s_supply_description_x_Set() const{
    return m_s_supply_description_x_isSet;
}

bool Supply_AutocompleteElement_Response::is_s_supply_description_x_Valid() const{
    return m_s_supply_description_x_isValid;
}

bool Supply_AutocompleteElement_Response::isBSupplyIsactive() const {
    return m_b_supply_isactive;
}
void Supply_AutocompleteElement_Response::setBSupplyIsactive(const bool &b_supply_isactive) {
    m_b_supply_isactive = b_supply_isactive;
    m_b_supply_isactive_isSet = true;
}

bool Supply_AutocompleteElement_Response::is_b_supply_isactive_Set() const{
    return m_b_supply_isactive_isSet;
}

bool Supply_AutocompleteElement_Response::is_b_supply_isactive_Valid() const{
    return m_b_supply_isactive_isValid;
}

bool Supply_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_supply_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_supply_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_supply_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Supply_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_supply_id_isValid && m_s_supply_description_x_isValid && m_b_supply_isactive_isValid && true;
}

} // namespace Ezmaxapi
