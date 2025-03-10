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

#include "Contacttitle_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Contacttitle_getAutocomplete_v2_Response_mPayload::Contacttitle_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Contacttitle_getAutocomplete_v2_Response_mPayload::Contacttitle_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Contacttitle_getAutocomplete_v2_Response_mPayload::~Contacttitle_getAutocomplete_v2_Response_mPayload() {}

void Contacttitle_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_contacttitle_isSet = false;
    m_a_obj_contacttitle_isValid = false;
}

void Contacttitle_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Contacttitle_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_contacttitle_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_contacttitle, json[QString("a_objContacttitle")]);
    m_a_obj_contacttitle_isSet = !json[QString("a_objContacttitle")].isNull() && m_a_obj_contacttitle_isValid;
}

QString Contacttitle_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Contacttitle_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_contacttitle.size() > 0) {
        obj.insert(QString("a_objContacttitle"), ::Ezmaxapi::toJsonValue(m_a_obj_contacttitle));
    }
    return obj;
}

QList<Contacttitle_AutocompleteElement_Response> Contacttitle_getAutocomplete_v2_Response_mPayload::getAObjContacttitle() const {
    return m_a_obj_contacttitle;
}
void Contacttitle_getAutocomplete_v2_Response_mPayload::setAObjContacttitle(const QList<Contacttitle_AutocompleteElement_Response> &a_obj_contacttitle) {
    m_a_obj_contacttitle = a_obj_contacttitle;
    m_a_obj_contacttitle_isSet = true;
}

bool Contacttitle_getAutocomplete_v2_Response_mPayload::is_a_obj_contacttitle_Set() const{
    return m_a_obj_contacttitle_isSet;
}

bool Contacttitle_getAutocomplete_v2_Response_mPayload::is_a_obj_contacttitle_Valid() const{
    return m_a_obj_contacttitle_isValid;
}

bool Contacttitle_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_contacttitle.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Contacttitle_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_contacttitle_isValid && true;
}

} // namespace Ezmaxapi
