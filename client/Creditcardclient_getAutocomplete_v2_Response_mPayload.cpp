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

#include "Creditcardclient_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Creditcardclient_getAutocomplete_v2_Response_mPayload::Creditcardclient_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Creditcardclient_getAutocomplete_v2_Response_mPayload::Creditcardclient_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Creditcardclient_getAutocomplete_v2_Response_mPayload::~Creditcardclient_getAutocomplete_v2_Response_mPayload() {}

void Creditcardclient_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_creditcardclient_isSet = false;
    m_a_obj_creditcardclient_isValid = false;
}

void Creditcardclient_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Creditcardclient_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_creditcardclient_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_creditcardclient, json[QString("a_objCreditcardclient")]);
    m_a_obj_creditcardclient_isSet = !json[QString("a_objCreditcardclient")].isNull() && m_a_obj_creditcardclient_isValid;
}

QString Creditcardclient_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Creditcardclient_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_creditcardclient.size() > 0) {
        obj.insert(QString("a_objCreditcardclient"), ::Ezmaxapi::toJsonValue(m_a_obj_creditcardclient));
    }
    return obj;
}

QList<Creditcardclient_AutocompleteElement_Response> Creditcardclient_getAutocomplete_v2_Response_mPayload::getAObjCreditcardclient() const {
    return m_a_obj_creditcardclient;
}
void Creditcardclient_getAutocomplete_v2_Response_mPayload::setAObjCreditcardclient(const QList<Creditcardclient_AutocompleteElement_Response> &a_obj_creditcardclient) {
    m_a_obj_creditcardclient = a_obj_creditcardclient;
    m_a_obj_creditcardclient_isSet = true;
}

bool Creditcardclient_getAutocomplete_v2_Response_mPayload::is_a_obj_creditcardclient_Set() const{
    return m_a_obj_creditcardclient_isSet;
}

bool Creditcardclient_getAutocomplete_v2_Response_mPayload::is_a_obj_creditcardclient_Valid() const{
    return m_a_obj_creditcardclient_isValid;
}

bool Creditcardclient_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_creditcardclient.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Creditcardclient_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_creditcardclient_isValid && true;
}

} // namespace Ezmaxapi
