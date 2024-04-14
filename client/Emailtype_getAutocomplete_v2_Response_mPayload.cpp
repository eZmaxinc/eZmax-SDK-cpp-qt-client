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

#include "Emailtype_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Emailtype_getAutocomplete_v2_Response_mPayload::Emailtype_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Emailtype_getAutocomplete_v2_Response_mPayload::Emailtype_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Emailtype_getAutocomplete_v2_Response_mPayload::~Emailtype_getAutocomplete_v2_Response_mPayload() {}

void Emailtype_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_emailtype_isSet = false;
    m_a_obj_emailtype_isValid = false;
}

void Emailtype_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Emailtype_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_emailtype_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_emailtype, json[QString("a_objEmailtype")]);
    m_a_obj_emailtype_isSet = !json[QString("a_objEmailtype")].isNull() && m_a_obj_emailtype_isValid;
}

QString Emailtype_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Emailtype_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_emailtype.size() > 0) {
        obj.insert(QString("a_objEmailtype"), ::Ezmaxapi::toJsonValue(m_a_obj_emailtype));
    }
    return obj;
}

QList<Emailtype_AutocompleteElement_Response> Emailtype_getAutocomplete_v2_Response_mPayload::getAObjEmailtype() const {
    return m_a_obj_emailtype;
}
void Emailtype_getAutocomplete_v2_Response_mPayload::setAObjEmailtype(const QList<Emailtype_AutocompleteElement_Response> &a_obj_emailtype) {
    m_a_obj_emailtype = a_obj_emailtype;
    m_a_obj_emailtype_isSet = true;
}

bool Emailtype_getAutocomplete_v2_Response_mPayload::is_a_obj_emailtype_Set() const{
    return m_a_obj_emailtype_isSet;
}

bool Emailtype_getAutocomplete_v2_Response_mPayload::is_a_obj_emailtype_Valid() const{
    return m_a_obj_emailtype_isValid;
}

bool Emailtype_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_emailtype.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Emailtype_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_emailtype_isValid && true;
}

} // namespace Ezmaxapi