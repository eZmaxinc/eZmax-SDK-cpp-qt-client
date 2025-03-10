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

#include "Franchiseoffice_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Franchiseoffice_getAutocomplete_v2_Response_mPayload::Franchiseoffice_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Franchiseoffice_getAutocomplete_v2_Response_mPayload::Franchiseoffice_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Franchiseoffice_getAutocomplete_v2_Response_mPayload::~Franchiseoffice_getAutocomplete_v2_Response_mPayload() {}

void Franchiseoffice_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_franchiseoffice_isSet = false;
    m_a_obj_franchiseoffice_isValid = false;
}

void Franchiseoffice_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Franchiseoffice_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_franchiseoffice_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_franchiseoffice, json[QString("a_objFranchiseoffice")]);
    m_a_obj_franchiseoffice_isSet = !json[QString("a_objFranchiseoffice")].isNull() && m_a_obj_franchiseoffice_isValid;
}

QString Franchiseoffice_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Franchiseoffice_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_franchiseoffice.size() > 0) {
        obj.insert(QString("a_objFranchiseoffice"), ::Ezmaxapi::toJsonValue(m_a_obj_franchiseoffice));
    }
    return obj;
}

QList<Franchiseoffice_AutocompleteElement_Response> Franchiseoffice_getAutocomplete_v2_Response_mPayload::getAObjFranchiseoffice() const {
    return m_a_obj_franchiseoffice;
}
void Franchiseoffice_getAutocomplete_v2_Response_mPayload::setAObjFranchiseoffice(const QList<Franchiseoffice_AutocompleteElement_Response> &a_obj_franchiseoffice) {
    m_a_obj_franchiseoffice = a_obj_franchiseoffice;
    m_a_obj_franchiseoffice_isSet = true;
}

bool Franchiseoffice_getAutocomplete_v2_Response_mPayload::is_a_obj_franchiseoffice_Set() const{
    return m_a_obj_franchiseoffice_isSet;
}

bool Franchiseoffice_getAutocomplete_v2_Response_mPayload::is_a_obj_franchiseoffice_Valid() const{
    return m_a_obj_franchiseoffice_isValid;
}

bool Franchiseoffice_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_franchiseoffice.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Franchiseoffice_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_franchiseoffice_isValid && true;
}

} // namespace Ezmaxapi
