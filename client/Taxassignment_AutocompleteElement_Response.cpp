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

#include "Taxassignment_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Taxassignment_AutocompleteElement_Response::Taxassignment_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Taxassignment_AutocompleteElement_Response::Taxassignment_AutocompleteElement_Response() {
    this->initializeModel();
}

Taxassignment_AutocompleteElement_Response::~Taxassignment_AutocompleteElement_Response() {}

void Taxassignment_AutocompleteElement_Response::initializeModel() {

    m_s_taxassignment_description_x_isSet = false;
    m_s_taxassignment_description_x_isValid = false;

    m_pki_taxassignment_id_isSet = false;
    m_pki_taxassignment_id_isValid = false;

    m_b_taxassignment_isactive_isSet = false;
    m_b_taxassignment_isactive_isValid = false;
}

void Taxassignment_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Taxassignment_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_taxassignment_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_taxassignment_description_x, json[QString("sTaxassignmentDescriptionX")]);
    m_s_taxassignment_description_x_isSet = !json[QString("sTaxassignmentDescriptionX")].isNull() && m_s_taxassignment_description_x_isValid;

    m_pki_taxassignment_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_taxassignment_id, json[QString("pkiTaxassignmentID")]);
    m_pki_taxassignment_id_isSet = !json[QString("pkiTaxassignmentID")].isNull() && m_pki_taxassignment_id_isValid;

    m_b_taxassignment_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_taxassignment_isactive, json[QString("bTaxassignmentIsactive")]);
    m_b_taxassignment_isactive_isSet = !json[QString("bTaxassignmentIsactive")].isNull() && m_b_taxassignment_isactive_isValid;
}

QString Taxassignment_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Taxassignment_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_taxassignment_description_x_isSet) {
        obj.insert(QString("sTaxassignmentDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_taxassignment_description_x));
    }
    if (m_pki_taxassignment_id_isSet) {
        obj.insert(QString("pkiTaxassignmentID"), ::Ezmaxapi::toJsonValue(m_pki_taxassignment_id));
    }
    if (m_b_taxassignment_isactive_isSet) {
        obj.insert(QString("bTaxassignmentIsactive"), ::Ezmaxapi::toJsonValue(m_b_taxassignment_isactive));
    }
    return obj;
}

QString Taxassignment_AutocompleteElement_Response::getSTaxassignmentDescriptionX() const {
    return m_s_taxassignment_description_x;
}
void Taxassignment_AutocompleteElement_Response::setSTaxassignmentDescriptionX(const QString &s_taxassignment_description_x) {
    m_s_taxassignment_description_x = s_taxassignment_description_x;
    m_s_taxassignment_description_x_isSet = true;
}

bool Taxassignment_AutocompleteElement_Response::is_s_taxassignment_description_x_Set() const{
    return m_s_taxassignment_description_x_isSet;
}

bool Taxassignment_AutocompleteElement_Response::is_s_taxassignment_description_x_Valid() const{
    return m_s_taxassignment_description_x_isValid;
}

qint32 Taxassignment_AutocompleteElement_Response::getPkiTaxassignmentId() const {
    return m_pki_taxassignment_id;
}
void Taxassignment_AutocompleteElement_Response::setPkiTaxassignmentId(const qint32 &pki_taxassignment_id) {
    m_pki_taxassignment_id = pki_taxassignment_id;
    m_pki_taxassignment_id_isSet = true;
}

bool Taxassignment_AutocompleteElement_Response::is_pki_taxassignment_id_Set() const{
    return m_pki_taxassignment_id_isSet;
}

bool Taxassignment_AutocompleteElement_Response::is_pki_taxassignment_id_Valid() const{
    return m_pki_taxassignment_id_isValid;
}

bool Taxassignment_AutocompleteElement_Response::isBTaxassignmentIsactive() const {
    return m_b_taxassignment_isactive;
}
void Taxassignment_AutocompleteElement_Response::setBTaxassignmentIsactive(const bool &b_taxassignment_isactive) {
    m_b_taxassignment_isactive = b_taxassignment_isactive;
    m_b_taxassignment_isactive_isSet = true;
}

bool Taxassignment_AutocompleteElement_Response::is_b_taxassignment_isactive_Set() const{
    return m_b_taxassignment_isactive_isSet;
}

bool Taxassignment_AutocompleteElement_Response::is_b_taxassignment_isactive_Valid() const{
    return m_b_taxassignment_isactive_isValid;
}

bool Taxassignment_AutocompleteElement_Response::isSet() const {
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

bool Taxassignment_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_taxassignment_description_x_isValid && m_pki_taxassignment_id_isValid && m_b_taxassignment_isactive_isValid && true;
}

} // namespace Ezmaxapi
