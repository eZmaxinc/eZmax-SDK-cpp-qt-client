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

#include "Userlogintype_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Userlogintype_getAutocomplete_v2_Response_mPayload::Userlogintype_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Userlogintype_getAutocomplete_v2_Response_mPayload::Userlogintype_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Userlogintype_getAutocomplete_v2_Response_mPayload::~Userlogintype_getAutocomplete_v2_Response_mPayload() {}

void Userlogintype_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_userlogintype_isSet = false;
    m_a_obj_userlogintype_isValid = false;
}

void Userlogintype_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Userlogintype_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_userlogintype_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_userlogintype, json[QString("a_objUserlogintype")]);
    m_a_obj_userlogintype_isSet = !json[QString("a_objUserlogintype")].isNull() && m_a_obj_userlogintype_isValid;
}

QString Userlogintype_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Userlogintype_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_userlogintype.size() > 0) {
        obj.insert(QString("a_objUserlogintype"), ::Ezmaxapi::toJsonValue(m_a_obj_userlogintype));
    }
    return obj;
}

QList<Userlogintype_AutocompleteElement_Response> Userlogintype_getAutocomplete_v2_Response_mPayload::getAObjUserlogintype() const {
    return m_a_obj_userlogintype;
}
void Userlogintype_getAutocomplete_v2_Response_mPayload::setAObjUserlogintype(const QList<Userlogintype_AutocompleteElement_Response> &a_obj_userlogintype) {
    m_a_obj_userlogintype = a_obj_userlogintype;
    m_a_obj_userlogintype_isSet = true;
}

bool Userlogintype_getAutocomplete_v2_Response_mPayload::is_a_obj_userlogintype_Set() const{
    return m_a_obj_userlogintype_isSet;
}

bool Userlogintype_getAutocomplete_v2_Response_mPayload::is_a_obj_userlogintype_Valid() const{
    return m_a_obj_userlogintype_isValid;
}

bool Userlogintype_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_userlogintype.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Userlogintype_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_userlogintype_isValid && true;
}

} // namespace Ezmaxapi
