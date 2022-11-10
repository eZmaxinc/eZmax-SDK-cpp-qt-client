/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAITaxassignment_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITaxassignment_AutocompleteElement_Response::OAITaxassignment_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITaxassignment_AutocompleteElement_Response::OAITaxassignment_AutocompleteElement_Response() {
    this->initializeModel();
}

OAITaxassignment_AutocompleteElement_Response::~OAITaxassignment_AutocompleteElement_Response() {}

void OAITaxassignment_AutocompleteElement_Response::initializeModel() {

    m_s_taxassignment_description_x_isSet = false;
    m_s_taxassignment_description_x_isValid = false;

    m_pki_taxassignment_id_isSet = false;
    m_pki_taxassignment_id_isValid = false;

    m_b_taxassignment_isactive_isSet = false;
    m_b_taxassignment_isactive_isValid = false;
}

void OAITaxassignment_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITaxassignment_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_taxassignment_description_x_isValid = ::OpenAPI::fromJsonValue(s_taxassignment_description_x, json[QString("sTaxassignmentDescriptionX")]);
    m_s_taxassignment_description_x_isSet = !json[QString("sTaxassignmentDescriptionX")].isNull() && m_s_taxassignment_description_x_isValid;

    m_pki_taxassignment_id_isValid = ::OpenAPI::fromJsonValue(pki_taxassignment_id, json[QString("pkiTaxassignmentID")]);
    m_pki_taxassignment_id_isSet = !json[QString("pkiTaxassignmentID")].isNull() && m_pki_taxassignment_id_isValid;

    m_b_taxassignment_isactive_isValid = ::OpenAPI::fromJsonValue(b_taxassignment_isactive, json[QString("bTaxassignmentIsactive")]);
    m_b_taxassignment_isactive_isSet = !json[QString("bTaxassignmentIsactive")].isNull() && m_b_taxassignment_isactive_isValid;
}

QString OAITaxassignment_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITaxassignment_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_taxassignment_description_x_isSet) {
        obj.insert(QString("sTaxassignmentDescriptionX"), ::OpenAPI::toJsonValue(s_taxassignment_description_x));
    }
    if (m_pki_taxassignment_id_isSet) {
        obj.insert(QString("pkiTaxassignmentID"), ::OpenAPI::toJsonValue(pki_taxassignment_id));
    }
    if (m_b_taxassignment_isactive_isSet) {
        obj.insert(QString("bTaxassignmentIsactive"), ::OpenAPI::toJsonValue(b_taxassignment_isactive));
    }
    return obj;
}

QString OAITaxassignment_AutocompleteElement_Response::getSTaxassignmentDescriptionX() const {
    return s_taxassignment_description_x;
}
void OAITaxassignment_AutocompleteElement_Response::setSTaxassignmentDescriptionX(const QString &s_taxassignment_description_x) {
    this->s_taxassignment_description_x = s_taxassignment_description_x;
    this->m_s_taxassignment_description_x_isSet = true;
}

bool OAITaxassignment_AutocompleteElement_Response::is_s_taxassignment_description_x_Set() const{
    return m_s_taxassignment_description_x_isSet;
}

bool OAITaxassignment_AutocompleteElement_Response::is_s_taxassignment_description_x_Valid() const{
    return m_s_taxassignment_description_x_isValid;
}

qint32 OAITaxassignment_AutocompleteElement_Response::getPkiTaxassignmentId() const {
    return pki_taxassignment_id;
}
void OAITaxassignment_AutocompleteElement_Response::setPkiTaxassignmentId(const qint32 &pki_taxassignment_id) {
    this->pki_taxassignment_id = pki_taxassignment_id;
    this->m_pki_taxassignment_id_isSet = true;
}

bool OAITaxassignment_AutocompleteElement_Response::is_pki_taxassignment_id_Set() const{
    return m_pki_taxassignment_id_isSet;
}

bool OAITaxassignment_AutocompleteElement_Response::is_pki_taxassignment_id_Valid() const{
    return m_pki_taxassignment_id_isValid;
}

bool OAITaxassignment_AutocompleteElement_Response::isBTaxassignmentIsactive() const {
    return b_taxassignment_isactive;
}
void OAITaxassignment_AutocompleteElement_Response::setBTaxassignmentIsactive(const bool &b_taxassignment_isactive) {
    this->b_taxassignment_isactive = b_taxassignment_isactive;
    this->m_b_taxassignment_isactive_isSet = true;
}

bool OAITaxassignment_AutocompleteElement_Response::is_b_taxassignment_isactive_Set() const{
    return m_b_taxassignment_isactive_isSet;
}

bool OAITaxassignment_AutocompleteElement_Response::is_b_taxassignment_isactive_Valid() const{
    return m_b_taxassignment_isactive_isValid;
}

bool OAITaxassignment_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_taxassignment_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_taxassignment_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_taxassignment_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITaxassignment_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_taxassignment_description_x_isValid && m_pki_taxassignment_id_isValid && m_b_taxassignment_isactive_isValid && true;
}

} // namespace OpenAPI
