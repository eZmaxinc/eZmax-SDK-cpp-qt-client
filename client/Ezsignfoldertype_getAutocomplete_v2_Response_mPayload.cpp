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

#include "Ezsignfoldertype_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::Ezsignfoldertype_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::Ezsignfoldertype_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::~Ezsignfoldertype_getAutocomplete_v2_Response_mPayload() {}

void Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_ezsignfoldertype_isSet = false;
    m_a_obj_ezsignfoldertype_isValid = false;
}

void Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignfoldertype_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignfoldertype, json[QString("a_objEzsignfoldertype")]);
    m_a_obj_ezsignfoldertype_isSet = !json[QString("a_objEzsignfoldertype")].isNull() && m_a_obj_ezsignfoldertype_isValid;
}

QString Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsignfoldertype.size() > 0) {
        obj.insert(QString("a_objEzsignfoldertype"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignfoldertype));
    }
    return obj;
}

QList<Ezsignfoldertype_AutocompleteElement_Response> Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::getAObjEzsignfoldertype() const {
    return m_a_obj_ezsignfoldertype;
}
void Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::setAObjEzsignfoldertype(const QList<Ezsignfoldertype_AutocompleteElement_Response> &a_obj_ezsignfoldertype) {
    m_a_obj_ezsignfoldertype = a_obj_ezsignfoldertype;
    m_a_obj_ezsignfoldertype_isSet = true;
}

bool Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::is_a_obj_ezsignfoldertype_Set() const{
    return m_a_obj_ezsignfoldertype_isSet;
}

bool Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::is_a_obj_ezsignfoldertype_Valid() const{
    return m_a_obj_ezsignfoldertype_isValid;
}

bool Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsignfoldertype.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfoldertype_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignfoldertype_isValid && true;
}

} // namespace Ezmaxapi
